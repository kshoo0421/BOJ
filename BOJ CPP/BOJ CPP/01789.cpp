#include <iostream>

int main()
{

	long long n, sum = 0, index = 1;
	scanf("%lld", &n);
	while (1)
	{
		sum += index;
		if (sum == n) break;
		else if (sum > n)
		{
			index--;
			break;
		}
		index++;
	}
	printf("%lld", index);
	return 0;
}