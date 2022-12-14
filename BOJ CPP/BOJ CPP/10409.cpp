#include <iostream>

int main()
{
	int n, t, sum = 0, input, count = 0;
	std::cin >> n >> t;
	while(n-- != 0)
	{
		std::cin >> input;
		sum += input;
		if (sum <= t) count++;
	}
	std::cout << count;
	return 0;
}