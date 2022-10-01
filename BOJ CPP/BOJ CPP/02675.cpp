#include <iostream>
using namespace std;

int main()
{
	int t, r;
	char S[21];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> r >> S;
		for (int k = 0; k < 21; k++)
		{
			if (S[k] == NULL) break;

			for (int j = 0; j < r; j++)
			{
				cout << S[k];
			}
		}
		cout << endl;
	}
	return 0;
}