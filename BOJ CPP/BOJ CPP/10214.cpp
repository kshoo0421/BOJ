#include <iostream>

int main()
{
	int t, a, b, total_a, total_b;
	std::cin >> t;
	while (t-- != 0)
	{
		total_a = 0;
		total_b = 0;
		for (int i = 0; i < 9; i++)
		{
			std::cin >> a >> b;
			total_a += a;
			total_b += b;
		}
		if (total_a > total_b)	std::cout << "Yonsei" << std::endl;
		else if (total_b > total_a)	std::cout << "Korea" << std::endl;
		else std::cout << "Draw" << std::endl;
	}
	return 0;
}