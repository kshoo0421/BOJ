#include <iostream>

int check_return(const int& a)
{
	int count = 1;
	const int start = a % 10;
	int temp_a = start * start;
	temp_a %= 10;
	while (start != temp_a)
	{
		temp_a *= start;
		temp_a %= 10;
		count++;
	}
	return count;
}

int mod(const int& a, int b)
{
	int count = check_return(a);
	int temp_a = 1;
	b = (b - 1) % count + 1;
	for (int i = 0; i < b; i++)
	{
		temp_a *= a;
		temp_a %= 10;
	}
	if (temp_a == 0) temp_a = 10;
	return temp_a;
}

int main()
{
	int t, a, b, result;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> a >> b;
		std::cout << mod(a, b) << std::endl;
	}
}