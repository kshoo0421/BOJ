#include <bits/stdc++.h>
using namespace std;

int distance(const string& s1, const string& s2, const string& s3)
{
	int result = 0;
	for (int i = 0; i < 4; i++)
	{
		if (s1[i] != s2[i]) result++;
		if (s2[i] != s3[i]) result++;
		if (s1[i] != s3[i]) result++;
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int t, n, sum, tmp;
	vector<string> vs;

	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> n;
		vs.assign(n, "");
		for (auto& s : vs) cin >> s;
		
		sum = 12;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					tmp = distance(vs[i], vs[j], vs[k]);
					if (tmp < sum) sum = tmp;
					if (sum == 0) break;
				}
				if (sum == 0) break;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
