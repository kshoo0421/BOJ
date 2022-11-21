#include <iostream>

int main()
{
	int a, b, c, second, temp;
	std::cin >> a >> b >> c >> second;

	if (second >= 3600)
	{
		temp = second / 3600;
		a += temp;
		second -= temp * 3600;
	}
	
	if (second >= 60)
	{
		temp = second / 60;
		b += temp;
		second -= temp * 60;
	}

	c += second;
	
	if (c >= 60)
	{
		c -= 60;
		b += 1;
	}
	if (b >= 60)
	{
		b -= 60;
		a += 1;
	}
	while (a >= 24)
	{
		a -= 24;
	}

	std::cout << a << " " << b << " " << c;
	return 0;
}