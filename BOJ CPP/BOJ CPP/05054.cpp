#include <iostream>
using namespace std;

int main()
{
	int t, n, xi, min, max;
	cin >> t;
	while (t-- != 0)
	{
		min = 100;
		max = 0;
		cin >> n;
		while(n-- != 0)
		{
			cin >> xi;
			if (xi > max) max = xi;
			if (xi < min) min = xi;
		}
		cout << (max - min) * 2 << endl;
	}
	return 0;
}