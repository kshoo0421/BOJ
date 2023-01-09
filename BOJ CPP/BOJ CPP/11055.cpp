#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, temp = 0; cin >> n;
	vector<int> input(n), memo(n);
	for (int& i : input) cin >> i;
	for (int i = 0; i < n; i++)
	{
		if (i == 0) memo[0] = input[0];
		else
		{
			temp = 0;
			memo[i] = input[i];
			for (int j = 0; j < i; j++)
			{
				if (input[j] < input[i])
				{
					temp = memo[j];
					if (memo[i] < temp + input[i]) memo[i] = temp + input[i];
				}
			}
		}
	}
	for (int i : memo) if (temp < i) temp = i;
	cout << temp;
	return 0;
}