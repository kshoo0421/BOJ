#include <iostream>

void print_dot(int n)
{
	for (int i = 0; i < n; i++)
		printf("*");
}

void print_space(int n)
{
	for (int i = 0; i < n; i++)
		printf(" ");
}

int main()
{
	int n;
	std::cin >> n;
	// Ã¹Â°ÁÙ
	print_space(n - 1);
	print_dot(1);
	printf("\n");

	for (int i = 1; i < n-1; i++)
	{
		print_space(n - i - 1);
		print_dot(1);
		print_space(2*i-1);
		print_dot(1);
		printf("\n");
	}
	if (n != 1) print_dot(2 * n - 1);
	return 0;
}