#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n, m;
	long long temp;
	scanf("%d %d", &n, &m);
	n += m;
	std::vector<long long> arrays(n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &arrays[i]);
	}
	std::sort(arrays.begin(), arrays.end());
	for(const long long i : arrays)
	{
		printf("%lld ", i);
	}
	return 0;
}