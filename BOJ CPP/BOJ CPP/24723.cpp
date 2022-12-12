#include <iostream>

int combination(int n)
{
	int sum = 0, temp;
	for (int i = 0; i <= n; i++)
	{
		temp = 1;
		if (i == 0 || i == n) sum += 1;
		else
		{
			for (int j = 0; j < i; j++)
			{
				temp *= (n - j);
				temp /= (j + 1);
			}
			sum += temp;
		}
	}
	return sum;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << combination(n-1) * 2;
	return 0;
}