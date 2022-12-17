#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, sum = 0, mode = 0, max_count = 0;
	bool is_second = false;
	float average;
	scanf("%d", &n);
	vector<int> nums(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
		sum += nums[i];
	}
	sort(nums.begin(), nums.end());
	
	average = (float)sum / (float)n;
	sum = round(average);
	
	printf("%d\n", sum);
	printf("%d\n", nums[n / 2]);

	// ÃÖºó°ª
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		int temp_num = nums[i];
		while (temp_num == nums[i])
		{
			i++;
			count++;
			if (n == i) break;
		}
		i--;
		
		if (max_count < count)
		{
			max_count = count;
			is_second = false;
			mode = nums[i];
		}
		else if (max_count == count && is_second == false)
		{
			is_second = true;
			mode = nums[i];
		}
	}
	printf("%d\n", mode);
	printf("%d\n", nums[n - 1] - nums[0]);
	return 0;
}