#include <iostream>

int main()
{
	int n, t, temp;
	std::cin >> n;
	while (n-- != 0)
	{
		temp = 0;
		std::cin >> t;
		while (1)
		{
			if (temp * (temp + 1) <= t) temp++;
			else
			{
				temp--;
				break;
			}
		}
		std::cout << temp << std::endl;
	}
	return 0;
}