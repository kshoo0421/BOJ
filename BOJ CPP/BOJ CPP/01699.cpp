#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, i_root, min_val, temp_val; cin >> n;
	i_root = (int)sqrt(n);
	vector<int> pows(i_root), memo(n + 1);
	for (int i = 0; i < i_root; i++) pows[i] = pow(i + 1, 2);
	memo[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		min_val = memo[i - (i / pows[0])] + i / pows[0];
		for (int j = (int)sqrt(i) - 1; j >= 0; j--)
		{
			temp_val = memo[i - (i / pows[j]) * pows[j]] + i / pows[j];
			if (min_val > temp_val) min_val = temp_val;
		}
		memo[i] = min_val;
	}
	cout << memo[n];
	return 0;
}