#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<long long> woods;
long long m;

bool check_height_possible(long long index)
{
	long long total = 0;
	for (int i = woods.size() - 1; i >= 0; i--)
	{
		if (woods[i] > index) total += woods[i] - index;
		else break;
	}
	return total >= m ? true : false;
}

long long find_max(long long l, long long r)
{ 

	long long mid = (l + r) / 2;
	if (mid == l)
	{
		return check_height_possible(r) ? r : l;
	}
	if(check_height_possible(mid))
	{
		return find_max(mid, r);
	}
	else
	{
		return find_max(l, mid);
	}
}

int main()
{
	int n;
	scanf("%d %lld", &n, &m);
	woods.assign(n, 0);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &woods[i]);
	}
	sort(woods.begin(), woods.end());

	printf("%lld", find_max(0, woods[woods.size() - 1]));
	return 0;
}