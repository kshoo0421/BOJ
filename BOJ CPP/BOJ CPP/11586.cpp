#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, k;
	cin >> n;
	vector<string> words(n);
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}
	cin >> k;
	switch (k)
	{
	case 1 :
		for (int i = 0; i < n; i++)
		{
			cout << words[i] << endl;
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << words[i][j];
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = 0; j < n; j++)
			{
				cout << words[i][j];
			}
			cout << endl;
		}
		break;
	default: break;
	}
	return 0;
}