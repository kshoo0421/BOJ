#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000000;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    dp[0][0] = 1;

    for (int i = 0; i <= N; ++i) {
        for (int j = 1; j <= K; ++j) {
            dp[i][j] = dp[i][j-1];
            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            }
        }
    }

    cout << dp[N][K];

    return 0;
}