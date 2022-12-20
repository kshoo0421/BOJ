#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, max = 0, temp;
	cin >> n;
	vector<int> ropes(n);
	for(int i = 0; i < n; i++)
	{
		cin >> ropes[i];
	}
	sort(ropes.rbegin(), ropes.rend());
	for (int i = 0; i < n; i++)
	{
		temp = ropes[i] * (i + 1);
		if (temp > max)max = temp;
	}
	cout << max;
	return 0;
}