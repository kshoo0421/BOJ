#include <iostream>
using namespace std;

int main()
{
	int t, a, b, num = 1;
	cin >> t;
	while (num <= t)
	{
		cin >> a >> b;
		cout << "Case #" << num << ": " << a << " + " << b << " = " << a + b << endl;
		num++;
	}
	return 0;
}