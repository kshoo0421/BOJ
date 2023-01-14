#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, pic_cnt = 0, tmp_pic, max_pic = 0, cur_x, cur_y, tmp_x, tmp_y; 
	int x_idx[4] = { 0, 1, 0, -1 };
	int y_idx[4] = { -1, 0, 1, 0 };
	cin >> n >> m;
	vector<int> tmp_vec(m);
	vector<vector<int>> input(n);
	queue<pair<int, int>> q;
	for (auto& i : input) i = tmp_vec;
	for (auto& i : input) for (int& j : i) cin >> j;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (input[i][j] == 1)
			{
				pic_cnt++;
				tmp_pic = 1;
				input[i][j] = 2;
				q.push({ i, j });
				while (q.size())
				{
					tmp_y = q.front().first;
					tmp_x = q.front().second;
					q.pop();
					for (int idx = 0; idx < 4; idx++)
					{
						cur_x = tmp_x + x_idx[idx];
						cur_y = tmp_y + y_idx[idx];
						if (cur_x < 0 || cur_x >= m) continue;
						if (cur_y < 0 || cur_y >= n) continue;
						if (input[cur_y][cur_x] == 1)
						{
							input[cur_y][cur_x] = 2;
							tmp_pic++;
							q.push({ cur_y, cur_x });
						}
					}
				}
				if (tmp_pic > max_pic) max_pic = tmp_pic;
			}
		}
	}
	cout << pic_cnt << "\n" << max_pic;
	return 0;
}