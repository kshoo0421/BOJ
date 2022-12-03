#include <iostream>

int main()
{
	int k = 0, d = 0, a = 0, i = 0;
	std::string kda;
	std::cin >> kda;
	while (kda[i] != '/')
	{
		k *= 10;
		k += kda[i] - '0';
		i++;
	}
	i++;

	while (kda[i] != '/')
	{
		d *= 10;
		d += kda[i] - '0';
		i++;
	}
	
	i++;

	while (i < kda.length())
	{
		a *= 10;
		a += kda[i] - '0';
		i++;
	}

	if (k + a < d || d == 0) std::cout << "hasu";
	else std::cout << "gosu";
	return 0;
}