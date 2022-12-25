#include <iostream>

int main()
{
	int a, e, index = 3;
	std::string name[4] = { "TroyMartian", "VladSaturnian", "GraemeMercurian", "Error" };
	std::cin >> a >> e;
	if (a >= 3 && e <= 4) std::cout << name[0] << std::endl;
	if (a <= 6 && e >= 2) std::cout << name[1] << std::endl;
	if (a <= 2 && e <= 3) std::cout << name[2] << std::endl;
	return 0;
}