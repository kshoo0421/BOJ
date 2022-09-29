#include <iostream>
using namespace std;

int cal(int a, int b, int c, int d, int e)
{
	int result = a * a + b * b + c * c + d * d + e * e;
	return (result % 10);
}

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << cal(a, b, c, d, e);
	return 0;
}