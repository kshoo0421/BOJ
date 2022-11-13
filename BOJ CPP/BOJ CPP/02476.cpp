#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, money = 0, max = 0;
	cin >> n;
	while (n-- != 0)
	{
		money = 0;
		cin >> a >> b >> c;
		if (a == b)
		{
			if (b == c) money += 10000 + a * 1000;
			else money += 1000 + a * 100;
		}
		else
		{
			if (a == c)	money += 1000 + a * 100;
			else if (b == c) money += 1000 + b * 100;
			else
			{
				if (a < b) a = b;
				if (a < c) a = c;
				money += a * 100;
			}
		}
		if (money > max) max = money;
	}
	cout << max;
	return 0;
}
