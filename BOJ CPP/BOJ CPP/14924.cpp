#include <iostream>

int main()
{
	int s, t, d;
	std::cin >> s >> t >> d;
	d /= 2 * s;
	std::cout << d * t;
	return 0;
}