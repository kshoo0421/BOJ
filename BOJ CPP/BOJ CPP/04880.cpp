#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	while (!(a == 0 && b == 0 && c == 0))
	{
		if (b - a == c - b) std::cout << "AP " << c + (c - b) << std::endl;
		else if (b / a == c / b) std::cout << "GP " << c * (c / b) << std::endl;
		std::cin >> a >> b >> c;
	}
	return 0;
}