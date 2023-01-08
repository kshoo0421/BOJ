#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, cur; cin >> n;
	vector<int> input(n), sum(n);
	for (int& i : input) cin >> i;
	sum[0] = input[0];
	for (int i = 1; i < n; i++)	sum[i] = input[i] + (sum[i - 1] < 0 ? 0 : sum[i - 1]);
	cur = sum[0];
	for (int i = 1; i < n; i++) if (cur < sum[i]) cur = sum[i];
	cout << cur;
	return 0;
}