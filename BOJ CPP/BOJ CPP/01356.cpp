#include <iostream>
#include <vector>
using namespace std;

bool check_yujin(int n)
{
	int a, b;
	vector<int> nums;
	while (n != 0)
	{
		nums.emplace_back(n % 10);
		n /= 10;
	}
	for (int i = 0; i < nums.size() - 1; i++)
	{
		a = 1, b = 1;
		for (int j = 0; j <= i; j++)
		{
			a *= nums[j];
		}
		for (int j = i + 1; j <= nums.size() - 1; j++)
		{
			b *= nums[j];
		}
		if (a == b) return true;
	}
	return false;
}

int main()
{
	int n;
	scanf("%d", &n);
	check_yujin(n) ? printf("YES") : printf("NO");
	return 0;
}