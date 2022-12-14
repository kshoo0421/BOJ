#include <iostream>

int clap(int n)
{
	int count = 0;
	while (n != 0)
	{
		if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) count++;
		n /= 10;
	}
	return count;
}

int main()
{
	int n, sum = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
		sum += clap(i);
	std::cout << sum;
	return 0;
}