#include <iostream>

void print_dot(const int& n)
{
	for (int i = 0; i < (n+1) / 2; i++)
		std::cout << "* ";
	std::cout << std::endl;
	for (int i = 0; i < n / 2; i++)
		std::cout << " *";
	std::cout << std::endl;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		print_dot(n);
	}
	return 0;
}