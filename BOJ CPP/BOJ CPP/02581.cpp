#include <iostream>

bool check_prime_num(const int& n)
{
	if (n == 1) return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	int m, n, min = 0;
	unsigned long long sum = 0;
	std::cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (check_prime_num(i))
		{
			if (min == 0) min = i;
			sum += (unsigned long long)i;
		}
	}
	if (sum == 0)
	{
		std::cout << "-1";
	}
	else
	{
		std::cout << sum << std::endl;
		std::cout << min << std::endl;
	}
	return 0;
}