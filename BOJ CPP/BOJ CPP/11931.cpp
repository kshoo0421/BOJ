#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}
	sort(nums.rbegin(), nums.rend());
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", nums[i]);
	}
	return 0;
}