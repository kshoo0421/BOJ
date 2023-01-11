#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int temp;
	string input[2];
	for (string& i : input) cin >> i;
	vector<int> temp_vec(input[1].length());
	vector<vector<int>> memo(input[0].length());
	for (auto& i : memo) i = temp_vec;
	for (int i = 0; i < input[0].length(); i++)
	{
		temp = 0;
		for (int j = 0; j < input[1].length(); j++)
		{
			if (i == 0)
			{
				if (input[0][i] == input[1][j]) memo[0][j] = 1;
			}
			else
			{
				if (j != 0) if (temp < memo[i - 1][j - 1]) temp = memo[i - 1][j - 1];
				if (input[0][i] == input[1][j])	memo[i][j] = temp + 1;
				else memo[i][j] = memo[i - 1][j];
			}
		}
	}
	for (int i : memo[input[0].length() - 1]) if (temp < i) temp = i;
	cout << temp;
	return 0;
}