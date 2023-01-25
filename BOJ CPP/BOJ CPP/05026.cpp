#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_com;
	int n, sum, tmp;
	string input;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		sum = 0, tmp = 0, is_com = false;
		getline(cin, input);
		for (char c : input)
		{
			if (c == 'P')
			{
				is_com = true;
				break;
			}
			else if (c == '+')
			{
				sum = tmp;
				tmp = 0;
			}
			else
			{
				tmp *= 10;
				tmp += c - '0';
			}
		}
		if (is_com) cout << "skipped\n";
		else
		{
			sum += tmp;
			cout << sum << "\n";
		}
	}
}