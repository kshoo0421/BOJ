#include <iostream>

int main()
{
	int n, i = 2;
	std::cin >> n;
	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
		else
		{
			i++;
		}
	}
	return 0;
}