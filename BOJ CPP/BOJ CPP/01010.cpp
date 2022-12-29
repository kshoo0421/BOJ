#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	long long result;
	cin >> t;
	while (t-- != 0)
	{
		result = 1;
		cin >> n >> m;
		if (n > m / 2) n = m - n;
		for (long long i = m; i > (long long)m - (long long)n; i--)
		{
			result *= i;
		}
		for (long long i = n; i > 0; i--)
		{
			result /= i;
		}
		cout << result << "\n";
	}
	return 0;
}