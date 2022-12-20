#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> list(n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &list[i].second, &list[i].first);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", list[i].second, list[i].first);
	}
	return 0;
}