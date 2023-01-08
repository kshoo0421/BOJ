#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, temp_set, temp_single, min_set, min_single, result = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> temp_set >> temp_single;
		if (i == 0) min_set = temp_set, min_single = temp_single;
		else
		{
			if (min_set > temp_set) min_set = temp_set;
			if (min_single > temp_single) min_single = temp_single;
		}
	}

	if (min_set >= min_single * 6) result = min_single * n;
	else
	{
		result += min_set * (n / 6);
		if (min_set >= min_single * (n % 6)) result += min_single * (n % 6);
		else result += min_set;
	}
	cout << result;

	return 0;
}