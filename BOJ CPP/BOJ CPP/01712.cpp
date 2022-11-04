#include <iostream>
using namespace std;

int main()
{
	long long a, b, c, count = 0;
	cin >> a >> b >> c;
	if (c <= b) count = -1;
	else count = a / (c - b) + 1;
	cout << count;
}