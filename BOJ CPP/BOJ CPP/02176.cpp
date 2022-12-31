#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, t, sum, x1, x2, y1, y2;
	int arrays[301][301];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arrays[i][j];
	}
	cin >> t;
	while (t-- != 0)
	{
		sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1 - 1; i < x2; i++)
		{
			for (int j = y1 - 1; j < y2; j++)
			{
				sum += arrays[i][j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}