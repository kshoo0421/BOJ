#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_end = false;
	int f, s, g, u, d, t_i;
	vector<int> cost;
	queue<int> q;

	cin >> f >> s >> g >> u >> d;
	cost.assign(f + 1, -1);
	cost[s] = 0;
	q.push(s);
	while (!q.empty())
	{
		t_i = q.front();
		q.pop();

		if (t_i + u <= f)
		{
			if (cost[t_i + u] == -1)
			{
				cost[t_i + u] = cost[t_i] + 1;
				q.push(t_i + u);
			}
		}
		if (t_i - d > 0)
		{
			if (cost[t_i - d] == -1)
			{
				cost[t_i - d] = cost[t_i] + 1;
				q.push(t_i - d);
			}
		}
		if (cost[g] != -1)
		{
			is_end = true;
			break;
		}
	}
	if (is_end) cout << cost[g];
	else cout << "use the stairs";
	return 0;
}