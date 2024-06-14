#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool b;
	int t, n, m, result;
	string s1, s2;
	map<string, int> clothes;
	vector<string> kinds;

	cin >> t;

	while (t--)
	{
		clothes.clear();
		kinds.clear();
		result = 1;

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			b = false;
			cin >> s1 >> s2;
			for (auto s : kinds)
			{
				if (s == s2)
				{
					clothes[s2]++;
					b = true;
				}
			}

			if (!b)
			{
				kinds.emplace_back(s2);
				clothes[s2] = 1;
			}
		}
		
		for (auto s : kinds)
		{
			result *= (clothes[s]+1);
		}
		result--;
		cout << result << "\n";
	}
}