#include <iostream>

int main()
{
	float d1, d2;
	std::cin >> d1 >> d2;
	d2 *= (2 * 3.141592);
	printf("%.6f", 2 * d1 + d2);
	return 0;
}