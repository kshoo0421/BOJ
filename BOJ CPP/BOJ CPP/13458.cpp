#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n, b, c, count = 0;

	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> b >> c;
	
	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		count++;

		if (a[i] > 0) count += ((a[i] - 1) / c) + 1;
	}
	cout << count;
	return 0;
}