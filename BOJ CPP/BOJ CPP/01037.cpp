#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, result = 1;
	cin >> n;
	vector<int> inputs(n);
	for(int i =0; i < n; i++)
	{
		cin >> inputs[i];
	}
	sort(inputs.begin(), inputs.end());
	cout << inputs[0] * inputs[n - 1];
	return 0;
}