#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m, temp;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	sort(a.begin(), a.end());
	while (m-- != 0)
	{
		scanf("%d", &temp);
		binary_search(a.begin(), a.end(), temp) ?
			printf("1\n") : printf("0\n");
	}
	return 0;
}