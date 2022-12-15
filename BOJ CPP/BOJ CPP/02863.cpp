#include <iostream>

int main()
{
	float a, b, c, d, temp, sum, max = 0;
	int count = 0;
	std::cin >> a >> b >> c >> d;
	for (int i = 0; i < 4; i++)
	{
		sum = a / c + b / d;
		if (sum > max)
		{
			max = sum;
			count = i;
		}
		temp = a;
		a = c;
		c = d;
		d = b;
		b = temp;
	}
	std::cout << count;
	return 0;
}