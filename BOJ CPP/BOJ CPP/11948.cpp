#include <iostream>

int main()
{
	int a[6], min1 = 100, min2 = 100, sum = 0;
	for (int i = 0; i < 6; i++)
	{
		std::cin >> a[i];
		sum += a[i];
		if (i < 4)
		{
			if (min1 > a[i]) min1 = a[i];
		}
		else
		{
			if (min2 > a[i]) min2 = a[i];
		}
	}
	sum -= (min1 + min2);
	std::cout << sum;
	return 0;
}