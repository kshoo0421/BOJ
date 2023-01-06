#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, max = 0;  cin >> n;
	vector<vector<int>> value_tree(n), sum_tree(n);
	vector<int> line;
	for (int i = 0; i < n; i++)
	{
		line.assign(i + 1, 0);
		for (int& j : line) cin >> j;
		value_tree[i] = line;
	}

	for (int i = 0; i < n; i++)
	{
		line.assign(i + 1, 0);
		if (i == 0) line[0] = value_tree[0][0];
		else
		{
			for (int j = 0; j < line.size(); j++)
			{
				if (j == 0)	line[0] = value_tree[i][0] + sum_tree[i - 1][0];
				else if (j == line.size() - 1)
					line[j] = value_tree[i][j] + sum_tree[i - 1][j - 1];
				else
				{
					line[j] = value_tree[i][j] +
						((sum_tree[i - 1][j - 1] < sum_tree[i - 1][j]) ? sum_tree[i - 1][j] : sum_tree[i - 1][j - 1]);
				}
			}
		}
		sum_tree[i] = line;
	}
	for (auto i : line)	if (max < i) max = i;
	cout << max;
	return 0;
}