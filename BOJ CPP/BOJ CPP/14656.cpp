#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	vector<int> input(n);
	for (int i = 0; i < n; i++)
		cin >> input[i];
	
	vector<int> copy = { input.begin(), input.end() };
	sort(input.begin(), input.end());
	
	for (int i = 0; i < n; i++)
		if (input[i] != copy[i]) count++;

	cout << count;
	return 0;
}