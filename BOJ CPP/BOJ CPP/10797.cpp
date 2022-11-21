#include <iostream>

int main()
{
	int count = 0, n, a;
	std::cin >> a;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> n;
		if (n == a) count++;
	}
	std::cout << count;
	return 0;
}