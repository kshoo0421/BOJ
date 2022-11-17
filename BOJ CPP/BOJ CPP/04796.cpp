#include <iostream>

int main()
{
	int l, p, v, full, rest, total = 0, case_count = 1;
	std::cin >> l >> p >> v;
	while (!(l == 0 && p == 0 && v == 0))
	{
		total = 0;
		full = v / p;
		total += full * l;
		rest = v - p * full;
		if (rest > l) total += l;
		else total += rest;
		std::cout << "Case " << case_count++ << ": " << total << std::endl;
		std::cin >> l >> p >> v;
	}
	return 0;
}