#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, cr_x, cr_y, tmp_x, tmp_y;
	int x_idx[4] = { 1, 0, -1, 0 }, y_idx[4] = { 0, 1, 0, -1 };
	cin >> n >> m;
	queue<pair<int, int>> q;
	vector<string> input(n);
	vector<int> tmp_vc;
	vector<vector<int>> memo(n);
	for (auto& i : input) cin >> i;
	tmp_vc.assign(m, -1);
	for (auto& i : memo) i = tmp_vc;
	memo[0][0] = 1;
	q.push({ 0, 0 });
	while (!(q.empty()))
	{
		tmp_x = q.front().second;
		tmp_y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			cr_x = tmp_x + x_idx[i];
			cr_y = tmp_y + y_idx[i];
			if (cr_x < 0 || cr_x >= m) continue;
			if (cr_y < 0 || cr_y >= n) continue;
			if (input[cr_y][cr_x] == '1' && memo[cr_y][cr_x] == -1)
			{
				q.push({ cr_y, cr_x });
				memo[cr_y][cr_x] = memo[tmp_y][tmp_x] + 1;
			}
		}
	}
	std::cout << memo[n-1][m-1];
	return 0;
}