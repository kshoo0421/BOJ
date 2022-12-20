#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, rate;
	cin >> n;
	vector<pair<int, int>> people(n);
	for (int i = 0; i < n; i++)
	{
		cin >> people[i].first >> people[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		rate = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (people[i].first < people[j].first)
			{
				if (people[i].second < people[j].second)
				{
					rate++;
				}
			}
		}
		cout << rate << " ";
	}
	return 0;
}