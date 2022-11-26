#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	vector<pair<int, int>>  coor;	// coordinate ÁÂÇ¥
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		coor.emplace_back(make_pair(x, y));
	}
	sort(coor.begin(), coor.end());
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", coor[i].first, coor[i].second);
	}
	return 0;
}