#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, max; cin >> n;
	vector<int> A(n), count(n);
	for (int& i : A) cin >> i;
	for (int& i : count) i = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)	
			if (A[j] < A[i] && count[j] >= count[i]) count[i] = count[j] + 1;
	max = count[0];
	for (int i : count) if (i > max) max = i;
	cout << max;
	return 0;
}