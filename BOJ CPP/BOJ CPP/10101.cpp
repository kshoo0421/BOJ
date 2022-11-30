#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a + b + c == 180)
	{
		if (a == b)
		{
			if (a == c) printf("Equilateral");
			else printf("Isosceles");
		}
		else if (b == c || a==c) printf("Isosceles");
		else printf("Scalene");
	}
	else printf("Error");
	return 0;
}