// 소수점 관련 공부 필요
#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout.precision(15);
	cout << fixed;
	cout << a / b;
	return 0;
}