#include <iostream>
using namespace std;

int main()
{
	int n, m, count;
	cin >> n >> m;
	if (n == 1) count = 1;
	else if (n == 2)
	{
		if (m >= 7) count = 4;
		else count = 1 + (m - 1) / 2;
	}
	else
	{
		if (m <= 4) count = m;
		else if (m == 5) count = 4;
		else count = m - 2;
	}
	cout << count;
	return 0;
}