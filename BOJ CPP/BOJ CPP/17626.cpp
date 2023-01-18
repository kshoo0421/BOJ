#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, cur_sqrt, cnt; cin >> n;
	cur_sqrt = (int)sqrt(n);
	vector<int> sqrts(cur_sqrt + 1), cnts(n + 1);
	for (int i = 0; i <= cur_sqrt; i++) sqrts[i] = i * i;
	for (int i = 1; i <= n; i++)
	{
		cnt = 4;
		for (int j = (int)sqrt(i); j > 0; j--) cnt = min(cnts[i - sqrts[j]] + 1, cnt);
		cnts[i] = cnt;
	}
	cout << cnts[n];
}