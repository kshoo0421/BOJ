#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	if (m <= 2) std::cout << "NEWBIE!";
	else if (m <= n) std::cout << "OLDBIE!";
	else std::cout << "TLE!";
	return 0;
}