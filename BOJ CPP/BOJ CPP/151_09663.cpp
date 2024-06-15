#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
int isused[15][15];
bool is_all_used;

void plus_used(int x, int y)
{
	for (int i = y + 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == x || y - x == i - j || x + y == i + j) isused[i][j]++;
		}
	}
}

void minus_used(int x, int y)
{
	for (int i = y + 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (isused[i][j] == 0) continue;
			if (j == x || y - x == i - j || x + y == i + j) isused[i][j]--;
		}
	}

}

void func(int k)
{
	if (k == n)
	{
		cnt++;
		return;
	}

	is_all_used = true;
	for (int i = 0; i < n; i++)
	{
		if (isused[k + 1][i] == 0)
		{
			is_all_used = false;
			break;
		}
	}
	if (is_all_used) return;

	for (int i = 0; i < n; i++)
	{
		if (isused[k][i] == 0)
		{
			plus_used(i, k);
			func(k + 1);
			minus_used(i, k);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
}