#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int N, K;
	cin >> N >> K;
	vector<vector<int>> wv(N, vector<int>(2));
	vector<vector<int>> dp(N + 1, vector<int>(K + 1));
	for (auto& vi : wv) cin >> vi[0] >> vi[1];
	for (int sum = 1; sum <= K; sum++) {
		for (int i = 0; i < N; i++) {
			if (wv[i][0] <= sum) {
				dp[i + 1][sum] =
					max(dp[i][sum], dp[i][sum - wv[i][0]] + wv[i][1]);
			}
			else dp[i + 1][sum] = dp[i][sum];
		}
	}
	cout << dp[N][K];
}