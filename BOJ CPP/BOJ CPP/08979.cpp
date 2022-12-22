#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct medal
{
	int gold;
	int silver;
	int bronze;
	int country;
};

int cmp(medal a, medal b)
{
	if (a.gold != b.gold) return a.gold < b.gold;
	if (a.silver != b.silver) return a.silver < b.silver;
	if (a.bronze != b.bronze) return a.bronze < b.bronze;
	return a.country < b.country;
}

int main()
{
	int n, t;
	cin >> n >> t;
	vector<medal> countries(n);
	for (int i = 0; i < n; i++)
	{
		cin >> countries[i].country >> countries[i].gold >> countries[i].silver >> countries[i].bronze;
		if (countries[i].country == t) countries[i].country = 1001;
	}
	sort(countries.rbegin(), countries.rend(), cmp);

	for (int i = 0; i < countries.size(); i++)
	{
		if (countries[i].country == 1001)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}