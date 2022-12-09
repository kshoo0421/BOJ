#include <iostream>

int main()
{
	int n, t, c, p, result;
	std::cin >> n >> t >> c >> p;
	result = (n-1) / t;
	result *= c * p;
	std::cout << result;
	return 0;
}