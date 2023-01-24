#include <bits/stdc++.h>
using namespace std;
int memo[100001];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n;	cin >> n;
	memo[0] = 3, memo[1] = 7;
	for (int i = 2; i < n; i++)
	{
		memo[i] = 2 * memo[i - 1] + memo[i - 2];
		if (memo[i] >= 9901) memo[i] %= 9901;
	}
	cout << memo[n - 1];
}