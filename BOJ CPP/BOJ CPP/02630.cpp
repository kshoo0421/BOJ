#include <iostream>
using namespace std;
int n, blue = 0, white = 0;
int input[128][128];

void check_box(const int& x1, const int& y1, const int& x2, const int& y2)
{
	bool is_divide = false;
	int color;
	color = input[y1][x1];
	for (int i = y1; i <= y2; i++)
	{
		for (int j = x1; j <= x2; j++)
		{
			if (input[i][j] != color)
			{
				is_divide = true;
				break;
			}
		}
		if (is_divide) break;
	}

	if (is_divide)
	{
		check_box(x1, y1, (x1 + x2) / 2, (y1 + y2) / 2);
		check_box((x1 + x2) / 2 + 1, y1, x2, (y1 + y2) / 2);
		check_box(x1, (y1 + y2) / 2 + 1, (x1 + x2) / 2, y2);
		check_box((x1 + x2) / 2 + 1, (y1 + y2) / 2 + 1, x2, y2);
	}
	else
	{
		if (color == 1) blue++;
		else white++;
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cin >> input[i][j];
	}
	check_box(0, 0, n - 1, n - 1);
	cout << white << "\n" << blue;
	return 0;
}