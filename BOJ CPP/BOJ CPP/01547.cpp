#include <iostream>
using namespace std;

int main()
{
	int m, a, b, cur = 1;
	cin >> m;
	while (m-- != 0)
	{
		cin >> a >> b;
		if (a == cur) cur = b;
		else if (b == cur) cur = a;
	}
	cout << cur;
	return 0;
}