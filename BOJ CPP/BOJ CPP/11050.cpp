#include <iostream>
using namespace std;

int main()
{
	int n, k, temp, result = 1;
	cin >> n >> k;

	if (n / 2 < k) k = n - k;
	temp = k;
	while (temp != 0)
	{
		result *= n--;
		temp--;
	}
	while (k != 0)
	{
		result /= k;
		k--;
	}
	cout << result;
	return 0;
}