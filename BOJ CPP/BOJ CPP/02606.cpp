#include <bits/stdc++.h>
using namespace std;
int n, m, t1, t2, cnt = 0;
stack<int> total;

struct computer
{
	bool check = false;
	stack<int> link;
};

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	vector<computer> pcs(n);
	while (m--)
	{
		cin >> t1 >> t2;
		pcs[t1 - 1].link.push(t2);
		pcs[t2 - 1].link.push(t1);

	}
	pcs[0].check = true;
	while (!pcs[0].link.empty())
	{
		total.push(pcs[0].link.top());
		pcs[0].link.pop();
	}

	while (!total.empty())
	{
		t1 = total.top();
		total.pop();
		if (pcs[t1 - 1].check) continue;
		pcs[t1 - 1].check = true;
		while (!pcs[t1 - 1].link.empty())
		{
			total.push(pcs[t1 - 1].link.top());
			pcs[t1 - 1].link.pop();
		}
	}
	for (auto i : pcs) if (i.check) cnt++;
	cout << cnt - 1;
}