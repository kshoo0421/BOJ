#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int N, K, MOD = 1000000000;
	cin >> N >> K;
	vector<vector<int>> dp(K + 1, vector<int>(N + 1));
	dp[0][0] = 1;
	for (int i = 1; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= MOD;
			}
		}
	}
	cout << dp[K][N];
}