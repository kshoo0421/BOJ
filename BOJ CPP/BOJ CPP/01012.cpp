#include <bits/stdc++.h>
using namespace std;
int t, n, m, k, y, x, nxt_x, nxt_y;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, -1, 0, 1 };
int farm[51][51], cost[51][51];
stack<pair<int, int>> stk;

void check_warm()
{
	int cnt = 0;
	fill(cost[0], cost[0] + 51 * 51, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (farm[i][j] == 1 && cost[i][j] == 0)
			{
				cnt++;
				cost[i][j] = 1;
				stk.push({ i, j });
				while (!stk.empty())
				{
					y = stk.top().first;
					x = stk.top().second;
					stk.pop();
					for (int i = 0; i < 4; i++)
					{
						nxt_x = x + dx[i];
						nxt_y = y + dy[i];
						if (nxt_x < 0 || nxt_x >= m) continue;
						if (nxt_y < 0 || nxt_y >= n) continue;
						if (farm[nxt_y][nxt_x] == 0 || cost[nxt_y][nxt_x] == 1) continue;
						cost[nxt_y][nxt_x] = 1;
						stk.push({ nxt_y, nxt_x });
					}
				}
			}
		}
	}
	cout << cnt << "\n";
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	while (t--)
	{
		fill(farm[0], farm[0] + 51 * 51, 0);
		cin >> m >> n >> k;
		while (k--)
		{
			cin >> x >> y;
			farm[y][x] = 1;
		}
		check_warm();
	}
}