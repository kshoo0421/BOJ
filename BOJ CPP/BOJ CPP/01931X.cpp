#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, max = 0, count = 0;
	cin >> n;
	vector<int> temp_input(3);
	vector<vector<int>> nums;
	for(int i = 0; i < n; i++)
	{
		cin >> temp_input[1] >> temp_input[2];
		if (max < temp_input[2]) max = temp_input[2];
		temp_input[0] = temp_input[2] - temp_input[1];
		nums.emplace_back(temp_input);
	}
	sort(nums.begin(), nums.end());
	vector<bool> cant_include(max, false);
	for (int i = 0; i < n; i++)
	{
		if (nums[i][0] == 0)
		{
			
			count++;
		}
	}

	return 0;
}