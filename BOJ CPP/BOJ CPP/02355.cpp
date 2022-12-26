#include <iostream>

int main()
{
	long long a, b, result;
	scanf("%lld %lld", &a, &b);
	if (a > b)	a += b, b = a - b, a -= b;
	result = ((b - a + 1) * (a + b)) / 2;
	printf("%lld", result);
	return 0;
}