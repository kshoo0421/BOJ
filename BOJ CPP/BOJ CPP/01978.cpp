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
	int n, num, count = 0;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> num;
		if (check_prime_num(num)) count++;
	}
	std::cout << count;
	return 0;
}