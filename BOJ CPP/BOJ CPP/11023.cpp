#include <iostream>

int main()
{
	long long int n, sum = 0;
	do {
		std::cin >> n;
		sum += n;
	} while (getc(stdin) == ' ');
	std::cout << sum;
	return 0;
}