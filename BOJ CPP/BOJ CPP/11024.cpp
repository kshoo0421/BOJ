#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int t, sum, tmp;
	string input;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		sum = 0, tmp = 0;
		getline(cin, input);
		for (char c : input)
		{
			if (c == ' ')
			{
				sum += tmp;
				tmp = 0;
			}
			else
			{
				tmp *= 10;
				tmp += c - '0';
			}
		}
		sum += tmp;
		cout << sum << "\n";
	}
}