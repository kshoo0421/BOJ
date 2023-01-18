#include <bits/stdc++.h>
using namespace std;
int cost[100001];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_end = false;
	int n, k, tmp_i; cin >> n >> k;
	queue<int> q;
	vector<int> tmp_q;
	fill(cost, cost + 100001, -1);
	cost[n] = 0;
	q.push(n);
	while (!q.empty())
	{
		tmp_i = q.front();
		q.pop();
		if (tmp_i > 0)
		{
			if (cost[tmp_i - 1] == -1)
			{
				q.push(tmp_i - 1);
				cost[tmp_i - 1] = cost[tmp_i] + 1;
			}
		}
		if (tmp_i < 100000)
		{
			if (cost[tmp_i + 1] == -1)
			{
				q.push(tmp_i + 1);
				cost[tmp_i + 1] = cost[tmp_i] + 1;
			}
		}
		if (tmp_i < 50001)
		{
			if (cost[tmp_i * 2] == -1)
			{
				q.push(tmp_i * 2);
				cost[tmp_i * 2] = cost[tmp_i] + 1;
			}
		}
		if (cost[k] != -1) break;
	}
	cout << cost[k];
	return 0;
}