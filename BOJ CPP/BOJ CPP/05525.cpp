#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, result = 0, cur = 0;
	string s;
	char c = 'O';
	vector<int> len;

	cin >> n >> m >> s;
	
	for (int i = 0; i < m; i++)
	{
		if (cur == 0 && s[i] == 'I')
		{
			cur++;
			c = 'I';
		}
		else if (c == 'I' && s[i] == 'O')
		{
			cur++;
			c = 'O';
		}
		else if (cur != 0 && c == 'O' && s[i] == 'I')
		{
			cur++;
			c = 'I';
		}
		else
		{
			if (cur != 0)
			{
				len.emplace_back(cur);
				cur = 0;
			}
			if (s[i] == 'I') cur = 1;
			c = s[i];
		}
	}
	if (cur != 0) len.emplace_back(cur);

	n = 2 * n + 1;

	for (int i : len)
	{
		if (i >= n)
		{
			i -= n;
			result++;
		
			if (i > 0) 
				result += (i / 2);
		}
	}
	cout << result;
}