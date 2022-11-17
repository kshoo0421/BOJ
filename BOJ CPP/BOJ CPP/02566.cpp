#include <iostream>

int main()
{
	int max = 0, row = 1, col = 1, input;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cin >> input;
			if (input > max)
			{
				max = input;
				col = i;
				row = j;
			}
		}
	}
	std::cout << max << std::endl;
	std::cout << col << " " << row;
	return 0;
}