#include <iostream>

bool is_dot(int n, int x, int y)
{
	int cur_line = 0;
	while (cur_line <= n / 2 + 1)
	{
		if (((x == cur_line || x == n - cur_line - 1) && (y >= cur_line && y <= n - cur_line - 1)) ||
			(((y == cur_line || y == n - cur_line - 1) && (x >= cur_line && x < n - cur_line - 1))))
			return true;
		cur_line += 2;
	}
	return false;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < 4 * n - 3; i++)
	{
		for (int j = 0; j < 4 * n - 3; j++)
		{
			if (is_dot(4 * n - 3, i, j)) std::cout << "*";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}