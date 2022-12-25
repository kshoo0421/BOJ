#include <iostream>

int main()
{
	unsigned long long a, b;
	std::cin >> a >> b;
	while (!(a == 0 && b == 0))
	{
		printf("%llu %llu / %llu\n", a / b, a % b, b);
		std::cin >> a >> b;
	}
	return 0;
}