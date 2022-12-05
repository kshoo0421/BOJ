#include <iostream>
#include <algorithm>

int main()
{
	int a[3], d1, d2;
	std::cin >> a[0] >> a[1] >> a[2];
	std::sort(a, a + 3);
	d1 = a[1] - a[0];
	d2 = a[2] - a[1];
	(d1 < d2) ? printf("%d", d2 - 1) : printf("%d", d1 - 1);
	return 0;
}