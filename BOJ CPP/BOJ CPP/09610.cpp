#include <iostream>

int main()
{
	int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> x >> y;
		if (x == 0 || y == 0) axis++;
		else if (x > 0) (y > 0) ? q1++ : q4++;
		else (y > 0) ? q2++ : q3++;
	}
	printf("Q1: %d\n", q1);
	printf("Q2: %d\n", q2);
	printf("Q3: %d\n", q3);
	printf("Q4: %d\n", q4);
	printf("AXIS: %d\n", axis);
	return 0;
}