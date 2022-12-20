#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> scores(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}
	sort(scores.rbegin(), scores.rend());
	printf("%d", scores[k - 1]);
	return 0;
}