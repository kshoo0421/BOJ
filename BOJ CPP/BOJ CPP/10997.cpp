#include <iostream>
#include <vector>
using namespace std;

void change_bool(vector<vector<bool>>& is_dot, int n)
{
	bool is_plus = false;
	int x_gap = 0;
	int cur_x = 4 * n - 4;
	int y_gap = 0;
	int cur_y = 0;

	while (y_gap <= (n - 1) * 2)
	{
		if (is_plus)
		{
			while (cur_x <= 4 * n - x_gap - 4)
				is_dot[cur_y][cur_x++] = true;
			cur_x--;
			x_gap += 2;
		}
		else
		{
			while (cur_x >= x_gap)
				is_dot[cur_y][cur_x--] = true;
			cur_x++;
		}
		is_plus = !is_plus;
		if (is_plus)
		{
			while (cur_y <= 4 * n - 2 - y_gap)
				is_dot[cur_y++][cur_x] = true;
			cur_y--;
			y_gap += 2;
		}
		else
		{
			while (cur_y >= y_gap)
				is_dot[cur_y--][cur_x] = true;
			cur_y++;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "*";
		return 0;
	}

	vector<bool> row(4 * n - 3, false);
	vector<vector<bool>> is_dot;
	for (int i = 0; i < 4 * n - 1; i++)
		is_dot.emplace_back(row);

	change_bool(is_dot, n);

	for (int i = 0; i < 4 * n - 1; i++)
	{
		for (int j = 0; j < 4 * n - 3; j++)
		{
			if (is_dot[i][j]) cout << "*";
			else cout << " ";
			if (i == 1) break;
		}
		cout << endl;
	}


	return 0;
}