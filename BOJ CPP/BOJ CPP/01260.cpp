#include <bits/stdc++.h>
using namespace std;
int n, m, v, t1, t2;
stack<int> stk;
queue<int> q;

struct node
{
	bool is_vis = false;
	vector<int> link;
};

vector<node> nds;

void dfs(int v)
{
	nds[v - 1].is_vis = true;
	cout << v << " ";
	for (auto i : nds[v - 1].link) stk.push(i);
	while (!stk.empty())
	{
		t1 = stk.top();
		stk.pop();
		if (nds[t1 - 1].is_vis) continue;
		nds[t1 - 1].is_vis = true;
		cout << t1 << " ";
		for (auto i : nds[t1 - 1].link) stk.push(i);
	}
}

void bfs(int v)
{
	nds[v - 1].is_vis = true;
	cout << v << " ";
	for (auto i : nds[v - 1].link) q.push(i);
	while (!q.empty())
	{
		t1 = q.front();
		q.pop();
		if (nds[t1 - 1].is_vis) continue;
		nds[t1 - 1].is_vis = true;
		cout << t1 << " ";
		for (auto i : nds[t1 - 1].link) q.push(i);
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m >> v;
	nds.resize(n);
	while (m--)
	{
		cin >> t1 >> t2;
		nds[t1 - 1].link.emplace_back(t2);
		nds[t2 - 1].link.emplace_back(t1);
	}
	for (auto& i : nds) sort(i.link.rbegin(), i.link.rend());
	dfs(v);
	cout << "\n";
	for (auto& i : nds) sort(i.link.begin(), i.link.end());
	for (auto& i : nds) i.is_vis = false;
	bfs(v);
}