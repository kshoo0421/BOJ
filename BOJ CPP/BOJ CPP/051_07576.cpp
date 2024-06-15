#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int m, n, tmp_x, tmp_y, cur_x, cur_y, max = 0;
	int x_idx[4] = { 1, 0, -1, 0 }, y_idx[4] = { 0, 1, 0, -1 };
	vector<int> tmp_vc;
	queue<pair<int, int>> q, tomato;

	cin >> n >> m;
	vector<vector<int>> input(m), memo(m), visit(m);
	tmp_vc.assign(n, -1);
	for (auto& i : input) i = tmp_vc;
	for (auto& i : memo) i = tmp_vc;
	for (auto& i : visit) i = tmp_vc;
	for (auto& i : input) for (int& j : i) cin >> j;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (input[i][j] == -1) memo[i][j] = 0;
			if (input[i][j] == 1)
			{
				memo[i][j] = 0;
				q.push({ i, j });
			}
		}
	}

	while (!(q.empty()))
	{
		tmp_x = q.front().second;
		tmp_y = q.front().first;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			cur_x = tmp_x + x_idx[k];
			cur_y = tmp_y + y_idx[k];
			if (cur_x < 0 || cur_x >= n) continue;
			if (cur_y < 0 || cur_y >= m) continue;
			if (visit[cur_y][cur_x] == 1) continue;

			if (input[cur_y][cur_x] == 0)
			{
				visit[cur_y][cur_x] = 1;
				q.push({ cur_y, cur_x });
				if (memo[cur_y][cur_x] == -1)
					memo[cur_y][cur_x] = memo[tmp_y][tmp_x] + 1;
				else
					memo[cur_y][cur_x] = min(memo[cur_y][cur_x],
						memo[tmp_y][tmp_x] + 1);
			}
		}
	}

	for (const auto& i : memo)
	{
		for (const auto& j : i)
		{
			if (j == -1)
			{
				max = -1;
				break;
			}
			if (j > max) max = j;
		}
		if (max == -1) break;
	}
	cout << max;

	return 0;
}