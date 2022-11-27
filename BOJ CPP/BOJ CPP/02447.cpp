#include <iostream>

bool check_blank(const int& n, int curX, int curY)
{
	int slash3 = n / 3;
	while (slash3 != 0)
	{
		if (curX / slash3 == 1 && curY / slash3 == 1) return false;
		else
		{
			curX -= slash3 * (curX / slash3);
			curY -= slash3 * (curY / slash3);
			slash3 /= 3;
		}
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check_blank(n, i, j)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}