#include <bits/stdc++.h>
using namespace std;
int n, cnt[3] = { 0, 0, 0 };
int input[6561][6561];

void check_paper(const int& x, const int& y, const int& size)
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
		if (is_break) break;
	}

	if (is_break)
	{
		check_paper(x, y, size / 3);
		check_paper(x + size / 3, y, size / 3);
		check_paper(x + (size * 2) / 3, y, size / 3);
		check_paper(x, y + size / 3, size / 3);
		check_paper(x + size / 3, y + size / 3, size / 3);
		check_paper(x + (size * 2) / 3, y + size / 3, size / 3);
		check_paper(x, y + (size * 2) / 3, size / 3);
		check_paper(x + size / 3, y + (size * 2) / 3, size / 3);
		check_paper(x + (size * 2) / 3, y + (size * 2) / 3, size / 3);
	}
	else cnt[cur + 1]++;
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)	for (int j = 0; j < n; j++)	cin >> input[i][j];
	check_paper(0, 0, n);
	cout << cnt[0] << "\n" << cnt[1]<< "\n" << cnt[2];
}