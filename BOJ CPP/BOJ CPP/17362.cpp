#include <iostream>

int main()
{
	long long int n;
	std::cin >> n;
	n %= 8;
	switch (n)
	{
	case 1 :
		std::cout << "1";
		break;
	case 0 :
	case 2 :
		std::cout << "2";
		break;
	case 3:
	case 7:
		std::cout << "3";
		break;
	case 4:
	case 6:
		std::cout << "4";
		break;
	case 5 :
		std::cout << "5";
		break;
	}
	return 0;
}