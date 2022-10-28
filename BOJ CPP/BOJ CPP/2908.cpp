#include <iostream>
using namespace std;

int reverse_num(int num)
{
	return (num / 100) + ((num / 10) % 10) * 10 + (num % 10) * 100;
}

int main()
{
	int a, b, temp;
	cin >> a >> b;
	a = reverse_num(a);
	b = reverse_num(b);
	cout << (a > b ? a : b) << endl;
	return 0;
}