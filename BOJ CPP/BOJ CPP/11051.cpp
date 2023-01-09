#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k, temp_val; cin >> n >> k;
	vector<int> temp_vec(1);
	pascal.assign(n + 1, { 1 });
	for (int i = 1; i <= n; i++)
	{
		temp_vec.assign(i + 1, 1);
		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0 || j == i) temp_vec[j] = 1;
			else
			{
				temp_val = pascal[i - 1][j - 1] + pascal[i - 1][j];
				if (temp_val >= 10007) temp_val %= 10007;
				temp_vec[j] = temp_val;
			}
		}
		pascal[i] = temp_vec;
	}
	cout << pascal[n][k];
	return 0;
}