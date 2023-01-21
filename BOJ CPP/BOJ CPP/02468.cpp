#include <bits/stdc++.h>
using namespace std;
int n, mx_cnt = 1, cur_cnt = 1, cur_rain = 0, cx, cy, nx, ny;
int town[100][100];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool memo[100][100];
vector<int> height;
queue<pair<int, int>> q;

void check_rain()
{
	for(int h : height)
	{
		if (cur_rain == h) continue;
		cur_rain = h;
		cur_cnt = 0;
		for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) memo[i][j] = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) 
			{
				if (town[i][j] > cur_rain && !memo[i][j])
				{
					q.push({ i, j });
					while (!q.empty())
					{
						cx = q.front().second;
						cy = q.front().first;
						q.pop();
						if (memo[cy][cx]) continue;
						memo[cy][cx] = true;
						
						for (int k = 0; k < 4; k++)
						{
							nx = cx + dx[k];
							ny = cy + dy[k];
							if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
							if (memo[ny][nx]) continue;
							if (town[ny][nx] <= cur_rain) continue;
							q.push({ ny, nx });
						}
					}
					cur_cnt++;
				}
			}
		}
		if (cur_cnt > mx_cnt) mx_cnt = cur_cnt;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> town[i][j];
			height.emplace_back(town[i][j]);
		}
	}
	sort(height.begin(), height.end());
	check_rain();
	std::cout << mx_cnt;
}