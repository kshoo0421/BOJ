#include <bits/stdc++.h>
using namespace std;
int n, l, r, cx, cy, nx, ny, tx, ty, tk, dif, sum, cnt = 0;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int A[50][50], cmp[50][50];
bool is_open[50][50][2], vis[50][50];
queue<pair<int, int>> q, memo;

void check_open()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			for(int k = 0; k < 2; k++)
				is_open[i][j][k] = false;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cx = j, cy = i;
			for (int k = 0; k < 2; k++)
			{
				nx = cx + dx[k];
				ny = cy + dy[k];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
				dif = abs(A[cy][cx] - A[ny][nx]);
				if (dif >= l && dif <= r) is_open[cy][cx][k] = true;
			}
		}
	}
}

void move()
{
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) vis[i][j] = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!vis[i][j])
			{
				sum = 0;
				q.push({ i, j });
				while (!q.empty())
				{
					cx = q.front().second;
					cy = q.front().first;
					q.pop();
					if (vis[cy][cx]) continue;
					vis[cy][cx] = true;
					sum += A[cy][cx];
					memo.push({ cy, cx });
					for (int k = 0; k < 4; k++)
					{
						nx = cx + dx[k];
						ny = cy + dy[k];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (k > 1) tk = k - 2, tx = nx, ty = ny;
						else tk = k, tx = cx, ty = cy;
						if (!is_open[ty][tx][tk]) continue;
						q.push({ ny, nx });
					}
				}
				sum /= memo.size();
				while (!memo.empty())
				{
					A[memo.front().first][memo.front().second] = sum;
					memo.pop();
				}
			}
		}
	}
}

bool is_diff()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (cmp[i][j] != A[i][j]) return true;
	return false;

}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			cin >> A[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cmp[i][j] = A[i][j];
	while (1)
	{
		check_open();
		move();
		if (is_diff())
		{
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					cmp[i][j] = A[i][j];
			cnt++;
			continue;
		}
		else break;
	}
	cout << cnt;
}