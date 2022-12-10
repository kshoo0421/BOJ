#include <iostream>

int main()
{
	int over = 0;
	long long int n, input, sum;
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		over = 0;
		std::cin >> n;
		while (n-- != 0)
		{
			std::cin >> input;
			if ((sum > 0 && input > 0) && (long long)(sum + input) < 0) over++;
			else if ((sum < 0 && input < 0) && (long long)(sum + input) > 0) over--;
			sum += input;
		}

		if (over > 0) std::cout << "+" << std::endl;
		else if (over < 0) std::cout << "-" << std::endl;
		else
		{
			if (sum == 0) std::cout << "0" << std::endl;
			else if (sum < 0) std::cout << "-" << std::endl;
			else std::cout << "+" << std::endl;
		}
	}
	return 0;
}