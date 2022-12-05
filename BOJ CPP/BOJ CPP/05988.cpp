#include <iostream>

int main()
{
	int n;
	std::string input;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> input;
		if ((input[input.size()-1] - '0') % 2 == 0) printf("even\n");
		else printf("odd\n");
	}
	return 0;
}