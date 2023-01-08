#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	bool black[100][100] = { false };
	int t, x, y, count = 0;
	cin >> t;
	while (t-- != 0)
	{
		cin >> x >> y;
		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				black[i][j] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (black[i][j]) count++;
		}
	}
	cout << count;
	return 0;
}