#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, temp; cin >> n;
	vector<int> inputs(n), left(n), right(n), sum(n);
	for (int& i : inputs) cin >> i;
	for (int i = 0; i < n; i++)
	{
		left[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (inputs[i] > inputs[j] && left[i] < left[j] + 1)
				left[i] = left[j] + 1;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		right[i] = 1;
		for (int j = n - 1; j > i; j--)
		{
			if (inputs[i] > inputs[j] && right[i] < right[j] + 1)
				right[i] = right[j] + 1;
		}
		sum[i] = left[i] + right[i] - 1;
	}
	temp = sum[0];
	for (int i : sum) if (temp < i) temp = i;
	cout << temp;
	return 0;
}