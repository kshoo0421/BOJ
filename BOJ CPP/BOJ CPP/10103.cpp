#include <iostream>

int main()
{
	bool is_p1_win = false;
	int n, a, b, p1 = 100, p2 = 100;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> a >> b;
		if (a > b) p2 -= a;
		else if(b> a) p1 -= b;
	}
	std::cout << p1 << std::endl << p2;
	return 0;
}