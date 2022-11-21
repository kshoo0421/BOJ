#include <iostream>

int main()
{
	int a, sum = 0, n = 5;
	while (n-- != 0)
	{
		std::cin >> a;
		if (a < 40) a = 40;
		sum += a;
	}
	std::cout << sum / 5;
	return 0;
}