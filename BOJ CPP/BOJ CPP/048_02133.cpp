#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int N;
	cin >> N;
	if (N % 2) {
		cout << "0";
		return 0;
	}
	N /= 2;
	vector<int> dp(N + 1);
	dp[0] = 1, dp[1] = 3;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] * 3;
		for (int j = 2; j <= i; j++) dp[i] += dp[i - j] * 2;
	}
	cout << dp[N];
}