#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	char rcp[3] = { 'R', 'S', 'P' };
	char p[2];
	int t, n, p1w, p2w;
	cin >> t;
	while (t--)
	{
		p1w = 0, p2w = 0;
		cin >> n;
		while (n--)
		{
			cin >> p[0] >> p[1];
			for (int i = 0; i < 2; i++)	for (int j = 0; j < 3; j++) if (rcp[j] == p[i]) p[i] = j;
			if (p[0] == p[1]) continue;
			else if (p[0] - p[1] == 1 || p[0] - p[1] == -2) p2w++;
			else p1w++;
		}
		if (p1w > p2w) cout << "Player 1\n";
		else if (p1w < p2w) cout << "Player 2\n";
		else cout << "TIE\n";
	}
}