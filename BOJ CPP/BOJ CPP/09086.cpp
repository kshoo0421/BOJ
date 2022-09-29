#include <iostream>
using namespace std;

int main()
{
	int n, m = 0;
	cin >> n;
	
	char word[10][1001];
	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 1000; j++)
			if (word[i][j + 1] == NULL)
			{
				m = j;
				break;
			}

		cout << word[i][0] << word[i][m] << endl;
	}
	return 0;
}