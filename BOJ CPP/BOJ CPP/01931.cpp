#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair <int, int>& a, pair <int, int>& b) {

	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int n, count = 0, end = 0;
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<pair<int, int>> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i].first >> nums[i].second;
	std::sort(nums.begin(), nums.end(), compare);

	for (int i = 0; i < n; i++)
	{
		if (end <= nums[i].first)
		{
			end = nums[i].second;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}