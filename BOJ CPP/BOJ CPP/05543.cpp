#include <iostream>

int main()
{
	int num[5], burger = 2000, drink = 2000;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> num[i];
		if (i < 3)
		{
			if (burger > num[i]) burger = num[i];
		}
		else
		{
			if (drink > num[i]) drink = num[i];
		}
	}
	std::cout << burger + drink - 50;
	return 0;
}