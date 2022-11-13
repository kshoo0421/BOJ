#include <iostream>
using namespace std;

int main()
{
	int t, n, temp, sum;
	cin >> t;
	while (t-- != 0)
	{
		sum = 0;
		cin >> n;
		while (n-- != 0)
		{
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}