#include <iostream>
#include <algorithm>

int main()
{
	int a[3];
	std::cin >> a[0] >> a[1] >> a[2];
	std::sort(a, a + 3);
	if (a[1] - a[0] == a[2] - a[1])
	{
		std::cout << 2 * a[2] - a[1];
	}
	else if (a[1] - a[0] == 2 * (a[2] - a[1]))
	{
		std::cout << a[0] + a[2] - a[1];
	}
	else std::cout << 2 * a[1] - a[0];
	return 0;
}