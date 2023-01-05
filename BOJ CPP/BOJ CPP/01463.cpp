#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, min; cin >> n;
	vector<int> nums(n + 1);
	nums[0] = 0, nums[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			min = nums[i / 3] < nums[i - 1] ? nums[i / 3] : nums[i - 1];
			if (i % 2 == 0 && min > nums[i / 2]) min = nums[i / 2];
			nums[i] = min + 1;
		}
		else if (i % 2 == 0) nums[i] = nums[i / 2] <= nums[i - 1] ? nums[i / 2] + 1 : nums[i - 1] + 1;
		else nums[i] = nums[i - 1] + 1;
	}
	cout << nums[n];
	return 0;
}