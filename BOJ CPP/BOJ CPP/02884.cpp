#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (m >= 45) m -= 45;
	else
	{
		if (h > 0)
			h -= 1;
		else h = 23;
		int temp = m - 45;
		m = 60 + temp;
	}
	cout << h << ' ' << m << endl;
	return 0;
}