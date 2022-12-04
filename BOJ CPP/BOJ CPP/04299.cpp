#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	if ((a - b) % 2 == 1 || a < b)	std::cout << "-1";
	else	std::cout << (a - b) / 2 + b << " " << (a - b) / 2;
	return 0;
}	