#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, temp_val; cin >> n;
	vector<int> inputs(n), memo(n);
	for (int& i : inputs) cin >> i;
	for (int i = 0; i < n; i++)
	{
		memo[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (inputs[j] > inputs[i])
			{
				if(memo[j] + 1 > memo[i]) memo[i] = memo[j] + 1;
			}
		}
	}
	temp_val = memo[0];
	for (int i : memo) if (i > temp_val) temp_val = i;
	cout << temp_val;
	return 0;
}