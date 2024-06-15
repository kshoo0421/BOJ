#include <bits/stdc++.h>
using namespace std;
int n, m, cx, cy, nx, ny, cnt = 0, mx_cnt = 0;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
int lab[8][8], memo[8][8];
vector<pair<int, int>> empty_place, virus_place;
stack<pair<int, int>> stk;

void select_wall(int k, int idx);
void spread_virus();

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> lab[i][j];
			if (lab[i][j] == 0) empty_place.push_back({ i, j });
			if (lab[i][j] == 2) virus_place.push_back({ i, j });
		}
	}
	select_wall(0, -1);
	cout << mx_cnt;
}

void select_wall(int k, int idx)
{
	if (k == 3)
	{
		spread_virus();
		return;
	}

	for (int i = idx + 1; i < empty_place.size(); i++)
	{
		lab[empty_place[i].first][empty_place[i].second] = 1;
		select_wall(k + 1, i);
		lab[empty_place[i].first][empty_place[i].second] = 0;
	}
}

void spread_virus()
{

	for (int i = 0; i < n; i++)	for (int j = 0; j < m; j++) memo[i][j] = lab[i][j];

	for (int i = 0; i < virus_place.size(); i++)
	{
		stk.push(virus_place[i]);
		while (!stk.empty())
		{
			cx = stk.top().second;
			cy = stk.top().first;
			stk.pop();
			memo[cy][cx] = 2;
			for (int k = 0; k < 4; k++)
			{
				nx = cx + dx[k];
				ny = cy + dy[k];
				if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
				if (memo[ny][nx] != 0) continue;
				stk.push({ ny, nx });
			}
		}
	}
	cnt = 0;
	for (int i = 0; i < n; i++)	for (int j = 0; j < m; j++) if (memo[i][j] == 0) cnt++;

	if (mx_cnt < cnt) mx_cnt = cnt;
}