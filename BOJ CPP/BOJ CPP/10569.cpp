#include <iostream>

int main()
{
	int t, v, e;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> v >> e;
		std::cout << 2 + e - v << std::endl;
	}
	return 0;
}