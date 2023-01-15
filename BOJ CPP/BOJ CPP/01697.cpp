#include <bits/stdc++.h>
using namespace std;
int vis[100001];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_end = false;
	int n, k, tmp_i; cin >> n >> k;
	queue<int> q;
	vector<int> tmp_q;
	fill(vis, vis + 100001, -1);
	vis[n] = 0;
	q.push(n);
	while (!q.empty())
	{
		tmp_i = q.front();
		q.pop();
		if (tmp_i > 0)
		{
			if (vis[tmp_i - 1] == -1)
			{
				q.push(tmp_i - 1);
				vis[tmp_i - 1] = vis[tmp_i] + 1;
			}
		}
		if (tmp_i < 100000)
		{
			if (vis[tmp_i + 1] == -1)
			{
				q.push(tmp_i + 1);
				vis[tmp_i + 1] = vis[tmp_i] + 1;
			}
		}
		if (tmp_i < 50001)
		{
			if (vis[tmp_i * 2] == -1)
			{
				q.push(tmp_i * 2);
				vis[tmp_i * 2] = vis[tmp_i] + 1;
			}
		}
		if (vis[k] != -1) break;
	}
	cout << vis[k];
	return 0;
}