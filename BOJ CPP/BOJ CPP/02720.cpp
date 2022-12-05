#include <iostream>

int main()
{
	int t, c, q, d, n, p;
	std::cin >> t;
	while (t-- != 0)
	{
		std::cin >> c;
		q = c / 25;
		c -= q * 25;
		d = c / 10;
		c -= d * 10;
		n = c / 5;
		c -= n * 5;
		p = c;
		printf("%d %d %d %d\n", q, d, n, p);
	}
	return 0;
}