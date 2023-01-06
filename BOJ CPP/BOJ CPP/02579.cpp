#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, max, cost[3], result;	// 0 : 최대 연속 2회, 1 : 연속 1회, 2 : 연속 0회
	cin >> n;
	vector<int> stairs(n);
	for (int& i : stairs) cin >> i;
	if (n > 2)
	{
		cost[0] = stairs[0] + stairs[1];
		cost[1] = stairs[1];
		cost[2] = stairs[0];
	}
	else for (int& i : cost) i = stairs[0] + stairs[1];
	for (int i = 2; i < n; i++)
	{
		max = cost[0] < cost[1] ? cost[1] : cost[0];
		// max = max < cost[2] ? cost[2] : max;
		cost[0] = stairs[i] + (cost[1] < cost[2] ? cost[2] : cost[1]);
		cost[1] = stairs[i] + cost[2];
		cost[2] = max;
	}
	result = cost[0] < cost[1] ? cost[1] : cost[0];
	cout << result;
	return 0;
}