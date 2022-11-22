#include <iostream>
using namespace std;

int main()
{
	int x, n, a, b, sum = 0;
	cin >> x >> n;
	while (n-- != 0)
	{
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == x) cout << "Yes";
	else cout << "No";
	return 0;
}