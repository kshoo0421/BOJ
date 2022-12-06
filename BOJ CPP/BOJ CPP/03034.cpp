#include <iostream>
#include <cmath>

int main()
{
	int n, w, h, input, max;
	std::cin >> n >> w >> h;
	max = sqrt(w * w + h * h);
	while (n-- != 0)
	{
		std::cin >> input;
		if (input <= max) std::cout << "DA\n";
		else std::cout << "NE\n";
	}
	return 0;
}