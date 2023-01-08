#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin >> n;
	vector<int> tile(n);
	if (n < 2) tile.assign(2, 0);
	tile[0] = 1, tile[1] = 2;
	for (int i = 2; i < n; i++)
	{
		tile[i] = tile[i - 1] + tile[i - 2];
		if (tile[i] >= 15746) tile[i] %= 15746;
	}
	cout << tile[n - 1];
	return 0; 
}