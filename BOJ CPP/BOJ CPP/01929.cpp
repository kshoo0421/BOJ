#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	vector<bool> is_prior_num(m, true);
	is_prior_num[0] = false;
	for (int i = 2; i < m; i++)
	{
		for (int j = 2; i * j <= m; j++)
		{
			is_prior_num[j * i - 1] = false;
		}
	}

	for (int i = n; i <= m; i++)
	{
		if (is_prior_num[i - 1]) printf("%d\n", i);
	}
	return 0;
}
