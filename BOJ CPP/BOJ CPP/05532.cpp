#include <iostream>

int main()
{
	int l, a, b, c, d;
	std::cin >> l >> a >> b >> c >> d;
	a = (a - 1) / c + 1;
	b = (b - 1) / d + 1;
	l = (a > b) ? l - a : l - b;
	std::cout << l;
}