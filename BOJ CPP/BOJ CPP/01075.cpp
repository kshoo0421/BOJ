#include <iostream>

int main()
{
	char nums[10] = { '0', '1', '2', '3', '4', '5' , '6', '7', '8' , '9' };
	long long n, f, rest, result;
	std::cin >> n >> f;
	result = n % 100;
	rest = n % f;
	result -= rest;
	if (result < 0) result += f;
	else
	{
		while (result >= 0)
		{
			result -= f;
		}
		result += f;
	}
	printf("%c%c", nums[result / 10 % 10], nums[result % 10]);
	return 0;
}