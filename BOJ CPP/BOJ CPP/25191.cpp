#include <iostream>

int main()
{
	int n, a, b, count;
	std::cin >> n >> a >> b;
	count = a / 2 + b;
	if (count > n) count = n;
	std::cout << count;
	return 0;
}