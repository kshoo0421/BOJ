#include <iostream>
using namespace std;

int main()
{
	char number[101];
	int n, sum = 0;
	cin >> n >> number;
	for (int i = 0; i < n; i++)
	{
		sum += int(number[i]);
	}
	cout << sum - 48*n;
	return 0;
}