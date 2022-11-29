#include <iostream>
#include <vector>
using namespace std;
bool change_field[50][50];

void fill_chess_field(const int& index, const string& chess, bool w_or_b) // true : w
{
	for (int i = 0; i < chess.size(); i++)
	{
		if (index % 2 == 0)
		{
			if (w_or_b)	// white
			{
				if (i % 2 != 0) (chess[i] == 'W') ? change_field[index][i] = true : change_field[index][i] = false;
				else (chess[i] == 'W') ? change_field[index][i] = false : change_field[index][i] = true;
			}
			else
			{
				if (i % 2 == 0) (chess[i] == 'W') ? change_field[index][i] = true : change_field[index][i] = false;
				else (chess[i] == 'W') ? change_field[index][i] = false : change_field[index][i] = true;
			}
		}
		else
		{
			if (w_or_b)	// white
			{
				if (i % 2 == 0) (chess[i] == 'W') ? change_field[index][i] = true : change_field[index][i] = false;
				else (chess[i] == 'W') ? change_field[index][i] = false : change_field[index][i] = true;
			}
			else
			{
				if (i % 2 != 0) (chess[i] == 'W') ? change_field[index][i] = true : change_field[index][i] = false;
				else (chess[i] == 'W') ? change_field[index][i] = false : change_field[index][i] = true;
			}
		}
	}
	return;
}

int minimum_sum_of_8x8(const int& n, const int& m)
{
	int temp_sum, result = 64;
	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			temp_sum = 0;
			for (int k = i; k < i + 8; k++)
			{
				for (int l = j; l < j + 8; l++)
					temp_sum += (int)change_field[k][l];
			}
			if (result > temp_sum) result = temp_sum;
		}
	}
	return result;
}

int main()
{
	int n, m, temp_sum, result = 64;

	cin >> n >> m;
	vector<string> chess(n);
	for (int i = 0; i < n; i++)
		cin >> chess[i];

	for (int i = 0; i < n; i++)
		fill_chess_field(i, chess[i], true);
	result = minimum_sum_of_8x8(n, m);

	for (int i = 0; i < n; i++)
		fill_chess_field(i, chess[i], false);
	temp_sum = minimum_sum_of_8x8(n, m);

	if (result > temp_sum) result = temp_sum;
	cout << result;
	return 0;
}