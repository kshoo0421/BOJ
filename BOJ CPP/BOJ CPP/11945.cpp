#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n, m;
	string line[10];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> line[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = m-1; j >= 0; j--)
		{
			if (line[i][j] == '1') cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
	return 0;
}