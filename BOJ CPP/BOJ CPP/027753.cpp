#include <iostream>
using namespace std;

int main()
{
	int t, k, n, sum;
	int people[15][14];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			sum = 0;
			if(i == 0) people[0][j] = j + 1; // 1Ãþ
			else
			{
				for (int k = 0; k <= j; k++)
					sum += people[i - 1][k];
				people[i][j] = sum;
			}
		}
	}
	
	cin >> t;
	while (t != 0)
	{
		cin >> k >> n;
		cout << people[k][n - 1] << endl;
		t--;
	}
}