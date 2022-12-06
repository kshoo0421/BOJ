#include <iostream>

int main()
{
	int t, input, min, sum;
	std::cin >> t;
	while (t-- != 0)
	{
		min = 100;
		sum = 0;
		for (int i = 0; i < 7; i++)
		{
			std::cin >> input;
			if (input % 2 == 0)
			{
				sum += input;
				if (input < min) min = input;
			}
		}
		std::cout << sum << " " << min << std::endl;
	}
	return 0;
}