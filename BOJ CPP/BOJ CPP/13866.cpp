#include <iostream>

int main()
{
	std::cin.tie(0);
	std::cout.tie(0);
	int result = 0, temp;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> temp;
		if (i == 0 || i == 3) result += temp;
		else result -= temp;
	}
	if (result < 0) result *= -1;
	std::cout << result;
	return 0;
}