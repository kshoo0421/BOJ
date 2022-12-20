#include <iostream>
#include <set>

int main()
{
	int n, temp;
	scanf("%d", &n);
	std::set<int> nums;
	while (n-- != 0)
	{
		scanf("%d", &temp);
		nums.insert(temp);
	}
	for (int i : nums)
	{
		printf("%d ", i);
	}
	return 0;
}