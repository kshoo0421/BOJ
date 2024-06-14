#include <bits/stdc++.h>
using namespace std;

int Map[1001][1001];
int Distance[1001][1001];
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };

queue<pair<int, int>> q;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, cx = 0, cy = 0, nx, ny, max;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> Map[i][j];
			Distance[i][j] = 0;
			if (Map[i][j] == 1)
			{
				Distance[i][j] = -1;
			}

			if (Map[i][j] == 2)
			{
				cy = i, cx = j;
			}
		}
	}

	q.push(make_pair(cy, cx));
	while (!q.empty())
	{
		max = 0;
		cx = q.front().second;
		cy = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			nx = cx + dx[i];
			ny = cy + dy[i];
			if (nx < m && nx >= 0 && ny < n && ny >= 0)
			{
				if (Map[ny][nx] != 0 && Map[ny][nx] != 2)
				{
					if (Distance[ny][nx] == -1)
					{
						Distance[ny][nx] = Distance[cy][cx] + 1;
					}
					else if(Distance[ny][nx] > Distance[cy][cx] + 1)
					{
						Distance[ny][nx] = Distance[cy][cx] + 1;
					}
				}

				if (Map[ny][nx] == 1)
				{
					Map[ny][nx] = 3;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << Distance[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}