#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int n, sum = 0;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}
	cout << sum;
	return 0;
}