#include <iostream>

int main()
{
	int i, sum = 0;
	std::cin >> i;
	while (i != -1)
	{
		sum += i;
		std::cin >> i;
	}
	std::cout << sum;
	return 0;
}