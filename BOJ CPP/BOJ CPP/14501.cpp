#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, max; cin >> n;
	vector<pair<int, int>> inputs(n);
	vector<int> memo(n);
	for (auto& i : inputs) cin >> i.first >> i.second;
	
	for (int i = 1; i <= n; i++)
	{
		if (i < inputs[n - i].first) memo[n - i] = 0;
		else
		{
			memo[n - i] = inputs[n - i].second;
			max = 0;
			for (int j = i - inputs[n - i].first; j > 0; j--)
			{
				if (max < memo[n - j])
				{
					max = memo[n - j];
				}
			}
			memo[n - i] += max;
		}
	}
	max = 0;
	for (int i : memo) if (max < i) max = i;
	cout << max;
	return 0;
}