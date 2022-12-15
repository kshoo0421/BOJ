#include <iostream>

int main()
{
	int n, count = 1;
	std::cin >> n;
	while (n != 0)
	{
		if (n % 2 == 0) std::cout << count << ". even " << n / 2 << std::endl;
		else std::cout << count << ". odd " << (n-1) / 2 << std::endl;
		std::cin >> n;
		count++;
	}
	return 0;
}