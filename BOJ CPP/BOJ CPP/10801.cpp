#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int a[10], b[10], aw = 0, bw = 0;
	for (int i = 0; i < 10; i++) cin >> a[i];
	for (int i = 0; i < 10; i++) cin >> b[i];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i]) aw++;
		else if (a[i] < b[i]) bw++;
	}
	if (aw > bw) cout << "A";
	else if (aw == bw) cout << "D";
	else cout << "B";
}