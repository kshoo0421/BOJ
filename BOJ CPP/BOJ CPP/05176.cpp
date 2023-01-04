#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int k, p, m, count, temp;
	vector<bool> exist_seat;
	cin >> k;
	while (k-- != 0)
	{
		count = 0;
		cin >> p >> m;
		exist_seat.assign(m, false);
		while (p-- != 0)
		{
			cin >> temp;
			if (exist_seat[temp - 1]) count++;
			else exist_seat[temp - 1] = true;
		}
		cout << count << "\n";
	}
	return 0;
}