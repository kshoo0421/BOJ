#include <bits/stdc++.h>
using namespace std;
int m, n, k, sx, sy, ex, ey, cx, cy, nx, ny, cnt = 0, tmp;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool paper[100][100], memo[100][100];
queue<pair<int, int>> q;
vector<int> sizes;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> m >> n >> k;
	while (k--)
	{
		cin >> sx >> sy >> ex >> ey;
		for (int i = sy; i < ey; i++) for (int j = sx; j < ex; j++) paper[i][j] = true;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!paper[i][j] && !memo[i][j])
			{
				tmp = 0;
				q.push({ i, j });
				while (!q.empty())
				{
					cx = q.front().second;
					cy = q.front().first;
					q.pop();
					if (memo[cy][cx]) continue;
					memo[cy][cx] = true;
					tmp++;
					for (int k = 0; k < 4; k++)
					{
						nx = cx + dx[k];
						ny = cy + dy[k];
						if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
						if (paper[ny][nx] || memo[ny][nx]) continue;
						q.push({ ny, nx });
					}
				}
				cnt++;
				sizes.emplace_back(tmp);
			}
		}
	}
	cout << cnt << "\n";
	sort(sizes.begin(), sizes.end());
	for (int i : sizes) cout << i << " ";
}