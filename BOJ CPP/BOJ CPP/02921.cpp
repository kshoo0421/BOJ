#include <iostream>

unsigned long long domino(const int& n)
{
	unsigned long long sum = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= 2 * i; j++)
			sum += j;
	return sum;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << domino(n) << std::endl;
	return 0;
}