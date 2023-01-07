#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; 	vector<long long> count;
	cin >> n;
	if (n < 3) count.assign(3, 0);
	else count.assign(n, 1);
	count[0] = 1, count[1] = 1, count[2] = 2;
	for (int i = 3; i < n; i++)
	{
		for(int j = 0; j <= i-2; j++)
			count[i] += count[j];
	}
	cout << count[n - 1];
	return 0;
}