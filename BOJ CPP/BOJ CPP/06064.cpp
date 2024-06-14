#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int t, m, n, x, y, k, cx, cy;

	cin >> t;
	while (t--)
	{
		cin >> m >> n >> x >> y;
		k = cx = cy = 1;
		
		while (cx != x)
		{
			cx++;
			cy = (cy < n) ? cy + 1 : 1;
			k++;
		}

		while (cy != y)
		{
			cy = (cy + m) % n;
			if (cy == 0) cy = n;
			k += m;

			if (k > m * n)
			{
				k = -1;
				break;
			}
		}
		cout << k << "\n";
	}
}