#include <iostream>
using namespace std;

int main()
{
	int t, s, n, q, p, sum;
	cin >> t;
	while (t-- != 0)
	{
		cin >> s >> n;
		sum = s;
		while(n-- != 0)
		{
			cin >> q >> p;
			sum += q * p;
		}
		cout << sum << endl;
	}
	return 0;
}