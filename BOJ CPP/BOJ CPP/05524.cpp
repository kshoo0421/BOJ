#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n;	cin >> n;
	string input;
	while (n--)
	{
		cin >> input;
		for (char& i : input) if (i >= 'A' && i <= 'Z') i += 32;
		cout << input << "\n";
	}
}