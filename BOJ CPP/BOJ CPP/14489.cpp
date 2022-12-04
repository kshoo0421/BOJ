#include <iostream>

int main()
{
	std::cin.tie(0);
	std::cout.tie(0);

	int temp, result;
	std::cin >> result;
	std::cin >> temp;
	result += temp;
	std::cin >> temp;
	if (result >= temp * 2) std::cout << result - (temp * 2);
	else std::cout << result;
	return 0;
}