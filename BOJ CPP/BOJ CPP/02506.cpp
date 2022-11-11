#include <iostream>
using namespace std;

int main()
{
	int n, cur, bonus = 1, sum = 0;
	cin >> n;
	while (n-- != 0)
	{
		cin >> cur;
		if (cur) sum += bonus++;
		else bonus = 1;
	}
	cout << sum;
	return 0;
}