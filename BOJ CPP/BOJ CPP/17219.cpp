#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	map<string, string> pw;
	int n, m;
	string s1, s2;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		pw[s1] = s2;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> s1;
		cout << pw[s1] << "\n";
	}
}