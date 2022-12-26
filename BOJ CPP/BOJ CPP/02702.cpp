#include <iostream>
using namespace std;

int max(int a, int b)
{
	int i = 2, result = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			result *= i;
			a /= i;
			b /= i;
		}
		else
		{
			i++;
		}
	}
	result *= a * b;
	return result;

}

int min(int a, int b)
{
	int i = 2, result = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			result *= i;
			a /= i;
			b /= i;
		}
		else
		{
			i++;
		}
	}
	return result;
}

int main()
{
	cin.tie(0)->sync_with_stdio(false);
	cout.tie(0)->sync_with_stdio(false);
	int n, a, b;
	cin >> n;
	while (n-- != 0)
	{
		cin >> a >> b;
		cout << max(a, b) << " " << min(a, b) << "\n";
	}
}