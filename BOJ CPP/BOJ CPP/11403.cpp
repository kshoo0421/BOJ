#include <bits/stdc++.h>
using namespace std;

int n;
int node[100][100];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> node[i][j];
		}
	}

	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (node[i][j] == 0)
				{
					if (node[i][k] == 1 && node[k][j] == 1)
					{
						node[i][j] = 1;
					}
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << node[i][j] << " ";
		}
		cout << "\n";
	}
}