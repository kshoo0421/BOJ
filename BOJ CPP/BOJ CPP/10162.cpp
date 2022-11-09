#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c;
	cin >> t;
	a = t / 300;
	t -= 300 * a;
	b = t / 60;
	t -= 60 * b;
	c = t / 10;
	t -= 10 * c;
	if (t != 0) cout << "-1";
	else cout << a << " " << b << " " << c;
	return 0;
}