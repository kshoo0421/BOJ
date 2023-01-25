#include <bits/stdc++.h>
using namespace std;
int r, c, cx, cy, nx, ny, tmp; 
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
char space[50][50];
int cost[50][50], water[50][50];
bool vis[50][50];
pair<int, int> start, goal;
queue<pair<int, int>> waters, q;

void fill_water()
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			water[i][j] = 256;

	while (!waters.empty())
	{
		cx = waters.front().second;
		cy = waters.front().first;
		waters.pop();
		water[cy][cx] = 0;
		q.push({ cy, cx });
	}
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
			if (nx < 0 || nx >= c || ny < 0 || ny >= r) continue;
			if (vis[ny][nx] || space[ny][nx] == 'X' || space[ny][nx] == 'D') continue;
			water[ny][nx] = min(water[cy][cx] + 1, water[ny][nx]);
			q.push({ ny, nx });
		}
	}
}

void fill_dochi()
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			vis[i][j] = false;
	q.push({ start.first, start.second });
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
			if (nx < 0 || nx >= c || ny < 0 || ny >= r) continue;
			if (vis[ny][nx] || space[ny][nx] == 'X') continue;
			tmp = cost[cy][cx] + 1;
			if (tmp < water[ny][nx] || space[ny][nx] == 'D')
			{
				if (cost[ny][nx] == 0) cost[ny][nx] = tmp;
				else cost[ny][nx] = min(tmp, cost[ny][nx]);
				q.push({ ny, nx });
			}
		}
	}
}


int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> r >> c;
	string input;
	for (int i = 0; i < r; i++)
	{
		cin >> input;
		for (int j = 0; j < c; j++)
		{
			space[i][j] = input[j];
			if (space[i][j] == 'D') goal.first = i, goal.second = j;
			if (space[i][j] == 'S') start.first = i, start.second = j;
			if (space[i][j] == '*') waters.push({ i, j });
		}
	}
	fill_water();
	fill_dochi();
	if (cost[goal.first][goal.second] == 0) cout << "KAKTUS";
	else cout << cost[goal.first][goal.second];
}