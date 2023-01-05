#include <iostream>
using namespace std;
int nums[11];

void set_nums()
{
	nums[0] = 0, nums[1] = 1, nums[2] = 2, nums[3] = 4;
	for (int i = 4; i <= 10; i++)
	{
		nums[i] = nums[i - 3] + nums[i - 2] + nums[i - 1];
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t, n;
	set_nums();
	cin >> t;
	while (t-- != 0)
	{
		cin >> n;
		cout << nums[n] << "\n";
	}
	return 0;
}