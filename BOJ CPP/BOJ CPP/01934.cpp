#include <iostream>

int max(int a, int b)
{
	int result = 1, i = 2;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			result *= i;
			a /= i;
			b /= i;
		}
		else
		{
			i++;
		}
	}
	result *= a * b;
	return result;
}

int main()
{
	std::cin.tie(0)->sync_with_stdio(false);
	std::cout.tie(0)->sync_with_stdio(false);
	int n, a, b;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> a >> b;
		std::cout << max(a, b) << "\n";
	}
	return 0;
}