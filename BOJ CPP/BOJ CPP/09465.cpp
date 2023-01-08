#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t, n, max_val, temp_val; 
	vector<int> temp;
	vector<vector<int>> input(2), memo(2);
	
	cin >> t;
	while (t--)
	{
		cin >> n;
		temp.assign(n, 0);
		for (auto& i : input) i = temp;
		for (auto& i : memo) i = temp;
		for (int& i : input[0]) cin >> i;
		for (int& i : input[1]) cin >> i;

		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				memo[0][0] = input[0][0], memo[1][0] = input[1][0];
				max_val = 0;
			}
			else
			{
				memo[0][i] = input[0][i] + max(memo[1][i - 1], max_val);
				memo[1][i] = input[1][i] + max(memo[0][i - 1], max_val);
				temp_val = max(memo[0][i - 1], memo[1][i - 1]);
				max_val = max(temp_val, max_val);
			}
		}
		cout << max(memo[0][n - 1], memo[1][n - 1]) << endl;
	}
	return 0;
}