#include <iostream>
using namespace std;

int main()
{
	int n, count = 1;
	string seats;
	cin >> n >> seats;
	for (int i = 0; i < n; i++)
	{
		if (seats[i] == 'S') count++;
		else
		{
			i++;
			count++;
		}
	}
	if (count > n) count = n;
	cout << count;
	return 0;
}