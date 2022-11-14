#include <iostream>
using namespace std;

bool check_blank(const int& n, int curX, int curY)
{
	int slash3 = n / 3;
	while (slash3 != 0)
	{
		if (curX / slash3 == 1 && curY / slash3 == 1) return false;
		else
		{
			switch (curX / slash3)
			{
			case 2: curX -= slash3;
			case 1: curX -= slash3;
			case 0:
			default: break;
			}
			switch (curY / slash3)
			{
			case 2: curY -= slash3;
			case 1: curY -= slash3;
			case 0:
			default: break;
			}
		}
		slash3 /= 3;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check_blank(n, i, j)) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}