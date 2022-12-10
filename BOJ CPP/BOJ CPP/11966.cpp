#include <iostream>

int main()
{
	bool is_correct = false;
	unsigned long long int n, temp = 1;
	std::cin >> n;
	if (temp == n) is_correct = true;
	else
	{
		for (int i = 0; i < 30; i++)
		{
			temp *= 2;
			if (temp == n)
			{
				is_correct = true;
				break;
			}
			else if (temp > n) break;
		}
	}
	if (is_correct) std::cout << "1";
	else std::cout << "0";
	return 0;
}