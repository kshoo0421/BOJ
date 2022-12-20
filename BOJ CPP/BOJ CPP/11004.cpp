#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(), vec.end());
	cout << vec[k - 1];
	return 0;
}