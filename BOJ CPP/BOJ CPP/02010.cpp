#include <iostream>
using namespace std;

int main()
{
	int n, input, sum = 0;
	cin >> n;
	while (n-- != 0)
	{
		cin >> input;
		sum += input - 1;
	}
	sum += 1;
	cout << sum;
	return 0;
}