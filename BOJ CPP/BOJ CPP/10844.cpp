#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, sum = 0; cin >> n;
	vector<int[10]> memo(n);
	memo[0][0] = 0;
	for (int i = 1; i < 10; i++) memo[0][i] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) memo[i][0] = memo[i - 1][1];
			else if (j == 9) memo[i][9] = memo[i - 1][8];
			else
			{
				memo[i][j] = memo[i - 1][j - 1] + memo[i - 1][j + 1];
				memo[i][j] %= 1000000000;
			}
		}
	}
	for (int i : memo[n - 1])
	{
		sum += i;
		if (sum > 1000000000) sum %= 1000000000;
	}
	cout << sum;
	return 0;
}