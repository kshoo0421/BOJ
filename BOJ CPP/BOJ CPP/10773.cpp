#include <iostream>
#include <stack>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int k, temp, sum = 0;
	stack<int> nums;
	cin >> k;
	while (k-- != 0)
	{
		cin >> temp;
		if (temp == 0) nums.pop();
		else nums.push(temp);
	}
	while (!nums.empty())
	{
		sum += nums.top();
		nums.pop();
	}
	cout << sum;
	return 0;
}