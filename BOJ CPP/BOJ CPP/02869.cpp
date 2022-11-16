#include <iostream>
using namespace std;

int main()
{
	int a, b, v, cur = 0, count = 1;
	cin >> a >> b >> v;
	v -= a;
	a -= b;
	if (v > 0)
	{
		if (v % a != 0)
		{
			v /= a;
			count += v + 1;
		}
		else
		{
			v /= a;
			count += v;
		}
	}
	cout << count;
	return 0;
}