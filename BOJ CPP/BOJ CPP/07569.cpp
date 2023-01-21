#include <bits/stdc++.h>

using namespace std;
bool is_end = false;
int n1, n2, n3, cx, cy, cz, nx, ny, nz, mx = 0;
int dx[6] = { 1, 0, -1, 0, 0, 0};
int dy[6] = { 0, 1, 0, -1, 0, 0};
int dz[6] = { 0, 0, 0, 0, 1, -1};
int input[100][100][100] = { 0 };
int cost[100][100][100] = { 0 };


struct i3
{
	int n[3];
};

i3 tmp_arr;
queue<i3> stk;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n1 >> n2 >> n3;
	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			for (int k = 0; k < n1; k++)
			{
				cin >> input[i][j][k];
			}
		}
	}

	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			for (int k = 0; k < n1; k++)
			{
				if (input[i][j][k] == 1)
				{
					tmp_arr.n[0] = i;
					tmp_arr.n[1] = j;
					tmp_arr.n[2] = k;
					stk.push(tmp_arr);

					while (!stk.empty())
					{
						cx = stk.front().n[2];
						cy = stk.front().n[1];
						cz = stk.front().n[0];
						stk.pop();

						for (int l = 0; l < 6; l++)
						{
							nx = cx + dx[l];
							ny = cy + dy[l];
							nz = cz + dz[l];
							if (nx < 0 || nx >= n1) continue;
							if (ny < 0 || ny >= n2) continue;
							if (nz < 0 || nz >= n3) continue;
							if (input[nz][ny][nx] != 0) continue;
							if (cost[nz][ny][nx] == 0 || cost[nz][ny][nx] > cost[cz][cy][cx] + 1)
							{
								if (cost[nz][ny][nx] == 0) cost[nz][ny][nx] = cost[cz][cy][cx] + 1;
								else cost[nz][ny][nx] = min(cost[cz][cy][cx] + 1, cost[nz][ny][nx]);
								tmp_arr.n[0] = nz;
								tmp_arr.n[1] = ny;
								tmp_arr.n[2] = nx;
								stk.push(tmp_arr);
							}
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			for (int k = 0; k < n1; k++)
			{
				if (cost[i][j][k] == 0 && input[i][j][k] == 0)
				{
					is_end = true;
					break;
				}
				if (cost[i][j][k] > mx) mx = cost[i][j][k];
			}
			if (is_end) break;
		}
		if (is_end) break;
	}
	if (is_end) cout << "-1";
	else cout << mx;
}