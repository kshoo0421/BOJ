#include <iostream>
#include <vector>

int main()
{
	int n, height = 0, count = 0;
	scanf("%d", &n);
	std::vector<int> sticks(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sticks[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (sticks[i] > height)
		{
			height = sticks[i];
			count++;
		}
	}
	printf("%d", count);
	return 0;
}