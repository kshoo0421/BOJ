#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k; cin >> n >> k;
	vector<int> input(n), temp(k + 1);
	vector<vector<int>> memo(2);
	for (auto& i : memo) i = temp;
	for (int& i : input) cin >> i;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) memo[0] = temp;
		else memo[1] = temp;

		for (int j = 0; j <= k; j++)
		{
			if (i == 0)
			{
				if (j % input[i] == 0) memo[i][j] = 1;
				else memo[i][j] = 0;
			}
			else
			{
				if (i % 2 == 0)
				{
					for (int k = j; k >= 0; k -= input[i])
						memo[0][j] += memo[1][k];
				}
				else
				{
					for (int k = j; k >= 0; k -= input[i])
						memo[1][j] += memo[0][k];
				}
			}
		}
	}
	cout << memo[n % 2 ? 0 : 1][k];
	return 0;
}