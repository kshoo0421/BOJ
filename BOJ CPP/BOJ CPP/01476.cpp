#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int e, s, m, check = 1;
	cin >> e >> s >> m;
	while (1)
	{
		if ((check - 1) % 15 == (e - 1) && (check - 1) % 28 == (s - 1)
			&& (check - 1) % 19 == (m - 1)) break;
		check++;
	}
	cout << check;
	return 0;
}