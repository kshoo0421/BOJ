#include <iostream>
using namespace std;

int main()
{
	int n, k, count = 1;
	cin >> n >> k;
	while (n >= count)
	{
		if (n % count == 0) k--;
		if (k == 0) break;

		if (count == n)
		{
			count = 0;
			break;
		}
		count++;
	}
	cout << count;
	return 0;
}