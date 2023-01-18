#include <bits/stdc++.h>
using namespace std;
int input[64][64];

void check_box(const int& x, const int& y, const int& size)
{
	bool is_break = false;
	int cur = input[y][x];
	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (input[i][j] != cur)
			{
				is_break = true;
				break;
			}
		}
		if(is_break) break;
	}
	if (is_break)
	{
		cout << "(";
		check_box(x, y, size / 2);
		check_box(x + size / 2, y, size / 2);
		check_box(x , y + size / 2, size / 2);
		check_box(x + size / 2, y + size / 2, size / 2);
		cout << ")";
	}
	else cout << cur;
}


int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n; cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < n; j++)	input[i][j] = str[j] - '0';
	}
	check_box(0, 0, n);
}