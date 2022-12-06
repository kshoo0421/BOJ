#include <iostream>

int main()
{
	int n, input;
	std::cin >> n >> input;
	while (input != 0)
	{
		if (input % n == 0) printf("%d is a multiple of %d.\n", input, n);
		else printf("%d is NOT a multiple of %d.\n", input, n);
		std::cin >> input;
	}
	return 0;
}