#include <iostream>
using namespace std;

int main()
{
	int coin[6] = { 500, 100, 50, 10, 5, 1 };
	int n, count = 0, temp;
	cin >> n;
	n = 1000 - n;
	for (int i = 0; i < 6; i++)
	{
		temp = n / coin[i];
		n -= coin[i] * temp;
		count += temp;
		if (n == 0) break;
	}
	cout << count;
	return 0;
}