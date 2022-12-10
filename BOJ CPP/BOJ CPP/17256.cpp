#include <iostream>

int main()
{
	int ax, ay, az, bx, by, bz;
	std::cin >> ax >> ay >> az >> bx >> by >> bz;
	std::cout << bx - az << " " << by / ay << " " << bz - ax;
	return 0;
}