#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	string chess[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> chess[i];
		for (int j = 0; j < 8; j++)
		{
			if (chess[i][j] == 'F' && i % 2 == j % 2) count++;
		}
	}
	printf("%d", count);
	return 0;
}