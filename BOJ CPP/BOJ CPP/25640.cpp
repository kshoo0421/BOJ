#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	string mine, other;
	cin >> mine >> n;
	while (n-- != 0)
	{
		cin >> other;
		if (mine == other) count++;
	}
	cout << count;
	return 0;
}