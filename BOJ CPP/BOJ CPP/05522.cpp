#include <iostream>
using namespace std;

int main()
{
	int i = 5, sum = 0, a;
	while(i-- != 0)
	{
		cin >> a;
		sum += a;
	}
	cout << sum;
	return 0;
}