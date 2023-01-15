#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, t_i; cin >> n;
	vector<int> input(n), memo;
	for (int& i : input) cin >> i;
	memo.assign(n, -1);
	memo[0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (input[i - j] >= j && memo[i - j] != -1)
			{
				t_i = memo[i - j] + 1;
				if (memo[i] == -1) memo[i] = t_i;
				else memo[i] = min(t_i, memo[i]);
			}
		}
	}
	cout << memo[n - 1];
	return 0;
}