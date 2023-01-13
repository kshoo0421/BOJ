#include <iostream>
#include <cmath>
using namespace std;
int n, r, c, pn, cur = 0; 

void check_num(const int& x, const int& y, const int& size)
{
	if (2 < size)
	{
		if (r >= y + size / 2)
		{
			if (c >= x + size / 2)
			{
				cur += (pow(size / 2, 2) * 3);
				check_num(x + size / 2, y + size / 2, size / 2);
			}
			else
			{
				cur += (pow(size / 2, 2) * 2);
				check_num(x, y + size / 2, size / 2);
			}
		}
		else
		{
			if (c >= x + size / 2)
			{
				cur += pow(size / 2, 2);
				check_num(x + size / 2, y, size / 2);
			}
			else check_num(x, y, size / 2);
		}
	}
	else
	{
		for (int i = y; i < y + 2; i++)
		{
			for (int j = x; j < x + 2; j++)
			{
				if (i == r && j == c) cout << cur;
				cur++;
			}
		}
	}
	return;
}


int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> r >> c;
	pn = pow(2, n);
	check_num(0, 0, pn);
	return 0;
}