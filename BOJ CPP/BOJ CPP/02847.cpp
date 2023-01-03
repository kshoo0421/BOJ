#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, cur, count = 0;
	cin >> n;
	vector<int> levels(n);
	for (int i = 0; i < n; i++)	cin >> levels[i];

	cur = levels[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (levels[i] >= cur)
		{
			count += levels[i] - (cur - 1);
			levels[i] = cur - 1;
		}
		cur = levels[i];
	}
	cout << count;
	return 0;
}