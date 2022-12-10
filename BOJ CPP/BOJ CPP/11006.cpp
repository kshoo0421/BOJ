#include <iostream>

int main()
{
	int t, a, b;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> a >> b;
		std::cout << 2 * b - a << " " << a - b << std::endl;
	}
	return 0;
}