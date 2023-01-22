#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	char cur ='-';
	int cnt = 0, mx = 0;
	string input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (cur != input[j])
			{
				if (cnt > mx) mx = cnt;
				cur = input[j];
				cnt = 1;
			}
			else cnt++;
		}
		if (cnt > mx) mx = cnt;
		cout << mx << "\n";
		cnt = 1, mx = 0, cur = '-';
	}
}