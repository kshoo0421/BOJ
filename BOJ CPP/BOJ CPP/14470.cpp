#include <iostream>

int main()
{
	int a, b, c, d, e, sum = 0;
	std::cin >> a >> b >> c >> d >> e;
	if (a < 0)
	{
		sum += (-a) * c + d;
		sum += b * e;
	}
	else if (a == 0)
	{
		sum += d + b * e;
	}
	else
	{
		sum += (b - a) * e;
	}
	std::cout << sum;
	return 0;
}