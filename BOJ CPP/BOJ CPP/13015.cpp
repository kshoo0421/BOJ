#include <iostream>

void print_dot(int n)
{
	for(int i =0; i < n; i++)
		std::cout << "*";
}

void print_space(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << " ";
}

void print_line(int n, int line)
{
	if (line == 0)
	{
		print_dot(n);
		print_space(2 * n - 3);
		print_dot(n);
	}
	else
	{
		print_space(line);
		print_dot(1);
		print_space(n-2);
		print_dot(1);
		
		if (line == n - 1)
		{
			print_space(n - 2);
			print_dot(1);
		}
		else
		{
			print_space(2 * (n - line) - 3);
			print_dot(1);
			print_space(n - 2);
			print_dot(1);
		}
	}
	std::cout << std::endl;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		print_line(n, i);
	for (int i = n - 2; i >= 0; i--)
		print_line(n, i);
	return 0;
}