#include <bits/stdc++.h>
#define X second
#define Y first
using namespace std;
int w, h, tmp, cx, cy, nx, ny, cnt;
bool vis[50][50];
int island[50][50];
int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
queue<pair<int, int>> q;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> w >> h;
	while (!(w == 0 && h == 0))
	{
		cnt = 0;
		fill(vis[0], vis[0] + 50*50, false);
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++) 
				cin >> island[i][j];
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (island[i][j] == 1 && !vis[i][j])
				{
					q.push({ i, j });
					while (!q.empty())
					{
						cx = q.front().X;
						cy = q.front().Y;
						q.pop();
						if (vis[cy][cx]) continue;
						vis[cy][cx] = true;
						for (int k = 0; k < 8; k++)
						{
							nx = cx + dx[k];
							ny = cy + dy[k];
							if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
							if (vis[ny][nx] || island[ny][nx] == 0) continue;
							q.push({ ny, nx });
						}
					}
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		cin >> w >> h;
	}
}