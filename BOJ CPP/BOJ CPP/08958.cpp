#include <iostream>
using namespace std;

int main()
{
	int t, count = 1, sum = 0;
	cin >> t;
	char OX[80];
	for (int i = 0; i < t; i++)
	{
		cin >> OX;
		for (int j = 0; j < 80; j++)
		{
			if (OX[j] == 'O')
				sum += count++;
			else if (OX[j] == 'X')
				count = 1;
			else
			{
				cout << sum << endl;
				break;
			}
		}
		sum = 0;
		count = 1;
	}
	return 0;
}