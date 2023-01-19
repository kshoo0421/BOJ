#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool exist[100];
	int n, input, cnt = 0;
	cin >> n;
	fill(exist, exist + 100, false);
	while (n--)
	{
		cin >> input;
		if (exist[input - 1]) cnt++;
		else exist[input - 1] = true;
	}
	cout << cnt;
}