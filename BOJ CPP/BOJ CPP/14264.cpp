#include <iostream>
#include <cmath>

int main()
{
	double result;
	int l;
	std::cin >> l;
	result = sqrt(3) * l * l / 4;
	printf("%.15f", result);

	return 0;
}