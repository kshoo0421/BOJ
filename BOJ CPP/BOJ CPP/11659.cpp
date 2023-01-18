#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, i, j, ans;
	cin >> n >> m;
	vector<int> input(n), sum(n + 1);
	for (int& i : input) cin >> i;
	for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + input[i - 1];
	while (m--)
	{
		cin >> i >> j;
		ans = sum[j] - sum[i - 1];
		cout << ans << "\n";
	}
}