#include <bits/stdc++.h>
using namespace std;
int n, m, mn_cnt = 1000000, cx, cy, nx, ny, tmp;
bool space[1000][1000];
bool vis[1000][1000];
int memo[1000][1000];
int wall[1000][1000];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q, walls;

void find_root()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			memo[i][j] = 0;
			vis[i][j] = false;
		}
	}
	memo[0][0] = 1;
	q.push({ 0, 0 });
	while (!q.empty())
	{
		cx = q.front().second;
		cy = q.front().first;
		q.pop();
		if (vis[cy][cx]) continue;
		vis[cy][cx] = true;
		for (int i = 0; i < 4; i++)
		{
			nx = cx + dx[i];
			ny = cy + dy[i];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if (vis[ny][nx]) continue;
			if (space[ny][nx] && wall[ny][nx] != 0)
			{
				tmp = memo[cy][cx] + wall[ny][nx];
				if (tmp > 0) mn_cnt = min(mn_cnt, tmp);
			}
			else if (space[ny][nx]) continue;
			else
			{
				q.push({ ny, nx });
				if (memo[ny][nx] == 0) memo[ny][nx] = memo[cy][cx] + 1;
				else memo[ny][nx] = min(memo[ny][nx], memo[cy][cx] + 1);
			}
		}
	}
	if (memo[n - 1][m - 1] != 0) mn_cnt = min(mn_cnt, memo[n - 1][m - 1]);
}

void step1()
{
	memo[n - 1][m - 1] = 1;
	q.push({ n - 1, m - 1 });
	while (!q.empty())
	{
		cx = q.front().second;
		cy = q.front().first;
		q.pop();
		if (vis[cy][cx]) continue;
		vis[cy][cx] = true;
		for (int i = 0; i < 4; i++)
		{
			nx = cx + dx[i];
			ny = cy + dy[i];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if (vis[ny][nx] || space[ny][nx]) continue;
			q.push({ ny, nx });
			memo[ny][nx] = memo[cy][cx] + 1;
		}
	}
}

void step2()
{
	while (!walls.empty())
	{
		tmp = 0;
		cx = walls.front().second;
		cy = walls.front().first;
		walls.pop();
		for (int i = 0; i < 4; i++)
		{
			nx = cx + dx[i];
			ny = cy + dy[i];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if (space[ny][nx] || memo[ny][nx] == 0) continue;
			if (tmp == 0) tmp = memo[ny][nx] + 1;
			else tmp = min(tmp, memo[ny][nx] + 1);
		}
		wall[cy][cx] = tmp;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	string input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < m; j++)
		{
			space[i][j] = (bool)(input[j] - '0');
			if (space[i][j]) walls.push({ i, j });
		}
	}
	step1();
	step2();
	find_root();
	if (mn_cnt == 1000000) cout << "-1";
	else cout << mn_cnt;
}