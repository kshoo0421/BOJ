#include <iostream>

int main()
{
	int temp, s = 0, t = 0;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> temp;
		if (i < 4) s += temp;
		else t += temp;
	}
	(s >= t) ? printf("%d", s) : printf("%d", t);
	return 0;
}