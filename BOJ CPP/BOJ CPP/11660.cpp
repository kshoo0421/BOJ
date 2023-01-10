#include <iostream>
#include <vector>
using namespace std;

struct x1x2y1y2
{
	int x1, x2, y1, y2;
};

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, sum; cin >> n >> m;
	vector<int> temp_vec(n);
	vector<vector<int>> table(n), memo(n);
	vector<x1x2y1y2> x_y_input(m);
	for (int i = 0; i < n; i++) table[i] = temp_vec, memo[i] = temp_vec;
	for (auto& i : table) for (int& j : i) cin >> j;
	for (auto& i : x_y_input) cin >> i.x1 >> i.y1 >> i.x2 >> i.y2;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			memo[i][j] = table[i][j];
			if (i != 0) memo[i][j] += memo[i - 1][j];
			if (j != 0) memo[i][j] += memo[i][j - 1];
			if (i != 0 && j != 0) memo[i][j] -= memo[i - 1][j - 1];
		}
	}

	for (const auto xy : x_y_input)
	{
		sum = memo[xy.x2 - 1][xy.y2 - 1];
		if (xy.x1 != 1 && xy.y1 != 1)
		{
			sum += memo[xy.x1 - 2][xy.y1 - 2];
			sum -= (memo[xy.x1 - 2][xy.y2 - 1] + memo[xy.x2 - 1][xy.y1 - 2]);
		}
		else
		{
			if (xy.x1 == 1 && xy.y1 == 1) sum = memo[xy.x2 - 1][xy.y2 - 1];
			else if (xy.x1 == 1) sum -= memo[xy.x2 - 1][xy.y1 - 2];
			else sum -= memo[xy.x1 - 2][xy.y2 - 1];
		}
		cout << sum << "\n";
	}
	return 0;
}