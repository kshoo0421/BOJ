#include <iostream>

int main()
{
	int t, c, v;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> c >> v;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c % v);
	}
	return 0;
}