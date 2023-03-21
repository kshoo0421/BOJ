#include <iostream>
using namespace std;

int main()
{
	int l, p;
	cin >> l >> p;
	p *= l;
	int a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] - p << ' ';
	}
}