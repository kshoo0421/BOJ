#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, count, min_sec;
	vector<pair<int, int>> interviewer;
	cin >> t;

	while (t-- != 0)
	{
		count = 1;
		cin >> n;
		interviewer.assign(n, { 0, 0 });
		for (int i = 0; i < n; i++)
		{
			cin >> interviewer[i].first >> interviewer[i].second;
		}

		sort(interviewer.begin(), interviewer.end());
	
		min_sec = interviewer[0].second;

		for (int i = 0; i < n; i++)
		{
			if (min_sec > interviewer[i].second)
			{
				min_sec = interviewer[i].second;
				count++;
			}

			if (min_sec == 1)	break;
		}
		cout << count << endl;
	}
	return 0;
}