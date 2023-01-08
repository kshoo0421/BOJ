#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int sum = 0, temp;
	bool exist_zero = false;
	string input;
	cin >> input;
	vector<int> nums(input.length());
	for (int i = 0; i < input.length(); i++)
	{
		temp = input[i] - '0';
		if (temp == 0) exist_zero = true;
		sum += temp;
		nums[i] = temp;
	}
	
	if (sum % 3 != 0 || exist_zero == false)
	{
		cout << "-1";
	}
	else
	{
		sort(nums.rbegin(), nums.rend());
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums[i];
		}
	}
	return 0;
}