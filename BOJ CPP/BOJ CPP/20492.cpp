#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	std::cout << n / 100 * 78 << " " << n / 5 * 4 + n / 5 * 78 / 100;
	return 0;
}