#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> grade(n);
	for (int i = 0; i < n; i++)
	{
		cin >> grade[i];
	}
	sort(grade.begin(), grade.end());
	cout << grade[n - 1] - grade[0];
	return 0;
}