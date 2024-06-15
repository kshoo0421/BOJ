#include <bits/stdc++.h>
using namespace std;
int n, m, nx, ny;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int input[500][500], memo[500][500];

int dfs(int x, int y)
{
	if (x == m - 1 && y == n - 1) return 1;
	if (memo[y][x] != -1) return memo[y][x];
	memo[y][x] = 0;
	for (int i = 0; i < 4; i++)
	{
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
		if (input[y][x] > input[ny][nx]) memo[y][x] = memo[y][x] + dfs(nx, ny);
	}
	return memo[y][x];
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> input[i][j];
			memo[i][j] = -1;
		}
	}
	cout << dfs(0, 0);
	return 0;
}