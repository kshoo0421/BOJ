#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k, result = 0; cin >> n >> k;
	vector<int> input(n), distance(n - 1);
	for (int& i : input) cin >> i;
	sort(input.begin(), input.end());
	for (int i = 1; i < n; i++)	distance[i - 1] = input[i] - input[i - 1];
	sort(distance.begin(), distance.end());
	for (int i = 0; i < n - k; i++) result += distance[i];
	cout << result;
	return 0;
}