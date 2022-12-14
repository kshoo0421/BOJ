#include <iostream>

int main()
{
	int c, k, p, sum = 0;
	std::cin >> c >> k >> p;
	for (int i = 1; i <= c; i++)
		sum += i * (k + i * p);
	std::cout << sum;
	return 0;
}