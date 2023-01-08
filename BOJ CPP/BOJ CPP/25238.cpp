#include <iostream>

bool is_possible(int a, int b)
{
	return (a * (100 - b) >= 10000) ? false : true;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	is_possible(a, b) ? printf("1") : printf("0");
	return 0;
}