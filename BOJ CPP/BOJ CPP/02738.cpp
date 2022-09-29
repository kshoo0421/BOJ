#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int matrix1[100][100];
	int matrix2[100][100];
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << matrix1[i][j] + matrix2[i][j] << " ";
		}
		cout << endl;
	}

}