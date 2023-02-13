#include <bits/stdc++.h>
using namespace std;

void hanoi(int s, int g, int n)
{
	if (n == 1)	cout << s << " " << g << "\n";
	else
	{
		hanoi(s, 6 - s - g, n - 1);
		cout << s << " " << g << "\n";
		hanoi(6 - s - g, g, n - 1);
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n; cin >> n;
	cout << (1 << n) - 1 << "\n";
	hanoi(1, 3, n);
	return 0;
}