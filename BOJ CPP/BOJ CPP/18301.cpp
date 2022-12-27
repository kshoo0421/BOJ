#include <iostream>

int main()
{
	int n1, n2, n12, result;
	std::cin >> n1 >> n2 >> n12;
	result = (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;
	std::cout << result;
	return 0;
}