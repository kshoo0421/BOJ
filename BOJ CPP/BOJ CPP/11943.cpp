#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	(a + d < b + c) ? std::cout << a + d : std::cout << b + c;
	return 0;
}