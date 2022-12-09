#include <iostream>

int main()
{
	int t;
	double input;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> input;
		input /= 100;
		input *= 80;
		printf("$%.2f\n", input);
	}
	return 0;
}