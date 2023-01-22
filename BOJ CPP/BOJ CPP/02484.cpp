#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_double = false;
	int t, sum = 0, cur, cur2, cnt, mx = 0;
	int dice[6], n[4];
	cin >> t;
	while (t--)
	{
		cnt = 0;
		fill(dice, dice + 6, 0);
		cin >> n[0] >> n[1] >> n[2] >> n[3];
		for (int i = 0; i < 4; i++) dice[n[i] - 1]++;
		for (int i = 0; i < 6; i++)
		{
			if (cnt < dice[i])
			{
				cnt = dice[i];
				cur = i;
			}
			else if (cnt == 2 && dice[i] == 2)
			{
				cur2 = i;
				is_double = true;
			}
			else if (cnt == dice[i]) cur = i;
		}
		switch (cnt)
		{
		case 4 :
			sum = (cur + 1) * 5000 + 50000;
			break;
		case 3: 
			sum = (cur + 1) * 1000 + 10000;
			break;
		case 2:
			if (is_double)	sum = 2000 + 500 * (cur + 1) + 500 * (cur2 + 1);
			else sum = 1000 + (cur + 1) * 100;
			break;
		case 1: sum = (cur + 1) * 100;
		default: break;
		}
		is_double = false;
		if (mx < sum) mx = sum;
	}
	cout << mx;
}