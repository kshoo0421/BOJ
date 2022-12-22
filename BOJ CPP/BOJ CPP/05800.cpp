#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, t, gap;
	vector<int> nums;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		gap = 0;
		cin >> t;
		nums.assign(t, 0);
		for (int i = 0; i < t; i++)
		{
			cin >> nums[i];
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (gap < nums[i + 1] - nums[i]) gap = nums[i + 1] - nums[i];
		}

		cout << "Class " << i << endl;
		printf("Max %d, Min %d, Largest gap %d\n", nums[nums.size() - 1], nums[0], gap);
	}
	return 0;
}