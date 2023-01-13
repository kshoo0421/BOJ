#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_remain;
	int n, m, ans = 0; 
	cin >> n >> m;
	vector<int> input(n), made;
	for (int& i : input) cin >> i;
	sort(input.rbegin(), input.rend());
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == m) continue;
		is_remain = true;
		for (int j = 0; j < made.size(); j++)
		{
			if (made[j] + input[i] == m)
			{
				made[j] += input[i];
				is_remain = false;
				break;
			}
		}
		if (is_remain) made.emplace_back(input[i]);
	}
	for (int i : made) if (i == m) ans++;
	cout << ans;
	return 0;
}