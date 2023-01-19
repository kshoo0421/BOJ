#include <bits/stdc++.h>
using namespace std;
bool exist[10];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int t, input, cnt;
	cin >> t;
	while (t--)
	{
		cnt = 0;
		fill(exist, exist + 10, false);
		cin >> input;
		if (input == 0) exist[0] = true;
		while (input)
		{
			exist[input % 10] = true;
			input /= 10;
		}
		for (bool i : exist) if (i) cnt++;
		cout << cnt << '\n';
	}
}