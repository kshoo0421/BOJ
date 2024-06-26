#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
int isUsed[15][15];
bool isAllUsed;

void plus_used(int x, int y)
{
	for (int i = y + 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == x || y - x == i - j || x + y == i + j) isUsed[i][j]++;
		}
	}
}

void minus_used(int x, int y)
{
	for (int i = y + 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (isUsed[i][j] == 0) continue;
			if (j == x || y - x == i - j || x + y == i + j) isUsed[i][j]--;
		}
	}

}

void BackTracking(int k)
{
	if (k == n)
	{
		cnt++;
		return;
	}

	isAllUsed = true;
	for (int i = 0; i < n; i++)
	{
		if (isUsed[k + 1][i] == 0)
		{
			isAllUsed = false;
			break;
		}
	}
	if (isAllUsed) return;

	for (int i = 0; i < n; i++)
	{
		if (isUsed[k][i] == 0)
		{
			plus_used(i, k);
			BackTracking(k + 1);
			minus_used(i, k);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	BackTracking(0);
	cout << cnt;
}