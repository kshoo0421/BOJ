#include <iostream>

int main()
{
	int k, n, m, result;
	std::cin >> k >> n >> m;
	result = k * n - m;
	if (result < 0) result = 0;
	std::cout << result;
	return 0;
}