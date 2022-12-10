#include <iostream>

int main()
{
	int a, b, col, row;
	std::cin >> a >> b;

	row = (b - 1) / 4 - (a - 1) / 4;
	if (row < 0) row *= -1;

	col = ((b - 1) % 4 + 1) - ((a - 1) % 4 + 1);
	if (col < 0) col *= -1;
 	std::cout << row + col;
	return 0;
}