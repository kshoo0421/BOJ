#include <bits/stdc++.h>
using namespace std;
int n, cur, two = 0, five = 0;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = n; i > 1; i--)
	{
		cur = i;
		while (cur % 2 == 0) cur /= 2, two++;
		while (cur % 5 == 0) cur /= 5, five++;
	}
	cout << min(two, five);
}