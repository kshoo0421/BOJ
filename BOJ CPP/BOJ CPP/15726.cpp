#include <iostream>

int main()
{
	long double a, b, c, result;
	std::cin >> a >> b >> c;
	result = (b > c) ? a * b / c : a / b * c;
	std::cout << (int)result;
	return 0;
}