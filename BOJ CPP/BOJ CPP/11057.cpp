#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, sum = 0; cin >> n;
	vector<int[10]> memo(n);
	for (int& i : memo[0]) i = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++) memo[i][j] += memo[i - 1][k];
			if (memo[i][j] >= 10007) memo[i][j] %= 10007;
		}
	}
	for (int i : memo[n - 1]) sum += i;
	if (sum > 10007) sum %= 10007;
	cout << sum;
	return 0;
}