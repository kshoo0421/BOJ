#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char campus[601][601];
bool visited[601][601];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, cx, cy, nx, ny, p = 0;
	string s;
	queue<pair<int, int>> q;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			campus[i][j] = s[j];

			if (s[j] == 'I')
			{
				visited[i][j] = true;
				q.push(make_pair(i, j));
			}
		}
	}

	while (!q.empty())
	{
		cy = q.front().first;
		cx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			ny = cy + dy[i];
			nx = cx + dx[i];
			if (ny >= 0 && ny < n && nx >= 0 && nx < m)
			{
				if (!visited[ny][nx] && campus[ny][nx] != 'X')
				{
					if (campus[ny][nx] == 'P') p++;
					visited[ny][nx] = true;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	
	if (p == 0) cout << "TT";
	else cout << p;
}