#include <iostream>

int main()
{
	int t, n, c, total;
	float g, result;
	std::cin >> t;
	while (t-- != 0)
	{
		total = 0;
		result = 0;
		std::cin >> n;
		while (n-- != 0)
		{
			std::cin >> c >> g;
			total += c;
			result += g * c;
		}
		printf("%d %.1f\n", total, result / total);
	}
}