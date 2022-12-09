#include <iostream>

void print_histogram(int k)
{
	while (k-- != 0)
	{
		printf("=");
	}
	printf("\n");
}

int main()
{
	int n, k;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> k;
		print_histogram(k);
	}
	return 0;
}