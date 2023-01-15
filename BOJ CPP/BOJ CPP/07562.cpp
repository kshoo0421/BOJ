#include <bits/stdc++.h>
#define y first
#define x second
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int t, n;
	int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
	int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	pair<int, int> s, e, t_p, c_p;
	vector<int> t_v;
	vector<vector<int>> cost;
	queue<pair<int, int>> q;

	cin >> t;
	while (t--)
	{
		cin >> n >> s.y >> s.x >> e.y >> e.x;
		t_v.assign(n, -1);
		cost.assign(n, t_v);

		q.push(s);
		cost[s.y][s.x] = 0;

		while (!q.empty())
		{
			t_p = q.front();
			q.pop();
			for (int i = 0; i < 8; i++)
			{
				c_p = { t_p.y + dy[i], t_p.x + dx[i] };
				if (c_p.y < 0 || c_p.y >= n) continue;
				if (c_p.x < 0 || c_p.x >= n) continue;
				if (cost[c_p.y][c_p.x] == -1)
				{
					cost[c_p.y][c_p.x] = cost[t_p.y][t_p.x] + 1;
					q.push(c_p);
				}
			}
			if (cost[e.y][e.x] != -1) break;
		}
		cout << cost[e.y][e.x] << "\n";
		while (!q.empty()) q.pop();
	}
	return 0;
}