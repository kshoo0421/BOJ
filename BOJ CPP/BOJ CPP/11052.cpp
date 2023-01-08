#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin >> n;
	vector<int> input(n);
	vector<vector<int>> sum(n);
	for (auto& i : sum) i = input;
	for (int& i : input) cin >> i;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			for (int cnt = 0; cnt < n; cnt++) sum[i][cnt] = input[0] * (cnt + 1);
		else
		{
			for (int cnt = 0; cnt < n; cnt++)
			{
				if (i < cnt)
					sum[i][cnt] = max(input[i] + sum[i][cnt - i - 1], sum[i - 1][cnt]);
				else if (i == cnt) sum[i][cnt] = max(input[i], sum[i - 1][cnt]);
				else
					sum[i][cnt] = sum[i - 1][cnt];
			}
		}
	}
	cout << sum[n - 1][n - 1];
	return 0;
}