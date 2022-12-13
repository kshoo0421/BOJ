#include <iostream>
#include <algorithm>

int main()
{
	int a[3];
	std::cin >> a[0] >> a[1] >> a[2];
	while (!(a[0] == 0 && a[1] == 0 && a[2] == 0))
	{
		std::sort(a, a + 3);
		if (a[0] + a[1] > a[2])
		{
			if (a[0] == a[1] && a[1] == a[2])	std::cout << "Equilateral" << std::endl;
			else if (a[0] == a[1] || a[1] == a[2])	std::cout << "Isosceles" << std::endl;
			else std::cout << "Scalene" << std::endl;
		}
		else std::cout << "Invalid" << std::endl;

		std::cin >> a[0] >> a[1] >> a[2];
	}
	return 0;
}