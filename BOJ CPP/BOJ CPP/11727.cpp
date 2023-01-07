#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin >> n;
	vector<int> sum(n);
	if (n == 1) sum.assign(2, 0);
	sum[0] = 1, sum[1] = 3;
	for (int i = 2; i < n; i++)
	{
		sum[i] = 2 * sum[i - 2] + sum[i - 1];
		if (sum[i] >= 10007) sum[i] %= 10007;
	}
	cout << sum[n - 1];
	return 0;
}