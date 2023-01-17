#include <bits/stdc++.h>
using namespace std;

struct node
{
	bool visit = false;
	vector<int> link;
};

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, t1, t2, cnt = 0;
	cin >> n >> m;
	vector<node> nds(n);
	stack<int> stk;
	while (m--)
	{
		cin >> t1 >> t2;
		nds[t1 - 1].link.emplace_back(t2);
		nds[t2 - 1].link.emplace_back(t1);
	}
	for (auto& i : nds)
	{
		if (i.visit) continue;
		i.visit = true;
		cnt++;
		for (auto j : i.link) stk.push(j);
		while (!stk.empty())
		{
			t1 = stk.top();
			stk.pop();
			if (nds[t1 - 1].visit) continue;
			nds[t1 - 1].visit = true;
			for (auto j : nds[t1 - 1].link) stk.push(j);
		}
	}
	cout << cnt;
}