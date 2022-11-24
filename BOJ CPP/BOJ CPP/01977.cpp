#include <iostream>
#include <cmath>

int main()
{
	unsigned long long m, n, min, cur, sum = 0;
	std::cin >> m >> n;
	min = sqrt(m-1) + 1;
	cur = min;
	if (cur * cur > n || (cur+1)*(cur+1) > n)
	{
		std::cout << "-1";
	}
	else
	{
		while (cur * cur <= n)
		{
			sum += cur * cur;
			if ((cur + 1) * (cur + 1) <= n)	cur++;
			else break;
		}
		std::cout << sum << std::endl;
		std::cout << min * min;
	}
	return 0;
}