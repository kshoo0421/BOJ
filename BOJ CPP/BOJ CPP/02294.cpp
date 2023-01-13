#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k, temp_int; cin >> n >> k;
	vector<int> input(n), temp_vec;
	temp_vec.assign(k + 1, -1);
	vector<vector<int>> memo(n);
	for (int& i : input) cin >> i;
	for (auto& i : memo) i = temp_vec;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (i == 0)
			{
				if (j % input[i] == 0) memo[i][j] = j / input[i];
			}
			else
			{
				memo[i][j] = memo[i - 1][j];
				if (j % input[i] == 0)
				{
					temp_int = j / input[i];
					memo[i][j] = temp_int < memo[i][j] ? temp_int : memo[i][j];
				}
				if (j >= input[i])
				{
					if (memo[i][j - input[i]] != -1)
					{
						temp_int = memo[i][j - input[i]] + 1;
						if (memo[i][j] == -1) memo[i][j] = temp_int;
						else memo[i][j] = temp_int < memo[i][j] ? temp_int : memo[i][j];
					}
				}
			}
		}
	}
	cout << memo[n - 1][k];
	return 0;
}