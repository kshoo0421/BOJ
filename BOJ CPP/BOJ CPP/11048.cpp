#include <bits/stdc++.h>
using namespace std;
int maze[1000][1000], memo[1000][1000];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)	for (int j = 0; j < m; j++)	cin >> maze[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(i == 0)
			{
				if (j == 0) memo[i][j] = maze[i][j];
				else memo[i][j] = memo[i][j - 1] + maze[i][j];
			}
			else
			{
				if (j == 0) memo[i][j] = memo[i - 1][j] + maze[i][j];
				else memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]) + maze[i][j];
			}
		}
	}
	cout << memo[n - 1][m - 1];
}