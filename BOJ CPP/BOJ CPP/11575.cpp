#include <bits/stdc++.h>
using namespace std;
int t, a, b;
string s;

int E(int x)
{
	return (a * x + b) % 26;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> s;
		for (char& c : s) c = E(c - 'A') + 'A';
		cout << s << "\n";
	}
}