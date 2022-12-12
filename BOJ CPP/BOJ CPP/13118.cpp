#include <iostream>

int main()
{
	int p1, p2, p3, p4, x, y, r, i = 0;
	std::cin >> p1 >> p2 >> p3 >> p4 >> x >> y >> r;
	if (p1 == x) i = 1;
	else if (p2 == x) i = 2;
	else if (p3 == x) i = 3;
	else if (p4 == x) i = 4;
	std::cout << i;
	return 0;
}