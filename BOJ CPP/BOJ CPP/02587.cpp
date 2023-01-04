#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int nums[5], sum = 0;
	for (int i = 0; i < 5; i++) cin >> nums[i];
	sort(nums, nums + 5);
	for (int i = 0; i < 5; i++) sum += nums[i];
	sum /= 5;
	cout << sum << "\n" << nums[2];
	return 0;
}