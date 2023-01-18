#include <bits/stdc++.h>
using namespace std;
int first[101][101], second[101][101], cost[101][101];
int n, cx, cy, nx, ny, cc, cnt = 0;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
stack<pair<int, int>> stk;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			if (input[j] == 'R') first[i][j] = 1, second[i][j] = 1;
			else if(input[j] == 'G') first[i][j] = 2, second[i][j] = 1;
			else first[i][j] = 3, second[i][j] = 3;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (cost[i][j] == 0)
			{
				cnt++;
				cc = first[i][j];
				stk.push({ i, j });
				while (!stk.empty())
				{
					cx = stk.top().second;
					cy = stk.top().first;
					stk.pop();
					cost[cy][cx] = 1;
					for (int k = 0; k < 4; k++)
					{
						nx = cx + dx[k];
						ny = cy + dy[k];
						if (nx < 0 || nx >= n) continue;
						if (ny < 0 || ny >= n) continue;
						if (first[ny][nx] != cc) continue;
						if (cost[ny][nx] == 1) continue;
						stk.push({ ny, nx });
					}
				}
			}
		}
	}
	cout << cnt << " ";
	cnt = 0;
	fill(cost[0], cost[0] + (int)pow(101, 2), 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (cost[i][j] == 0)
			{
				cnt++;
				cc = second[i][j];
				stk.push({ i, j });
				while (!stk.empty())
				{
					cx = stk.top().second;
					cy = stk.top().first;
					stk.pop();
					cost[cy][cx] = 1;
					for (int k = 0; k < 4; k++)
					{
						nx = cx + dx[k];
						ny = cy + dy[k];
						if (nx < 0 || nx >= n) continue;
						if (ny < 0 || ny >= n) continue;
						if (second[ny][nx] != cc) continue;
						if (cost[ny][nx] == 1) continue;
						stk.push({ ny, nx });
					}
				}
			}
		}
	}
	cout << cnt;
}