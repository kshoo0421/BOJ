#include <bits/stdc++.h>
using namespace std;
int n, cnt = 1, t1, t2, nx, ny;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
int dots[26][26], cost[26][26];
string input;
queue<pair<int, int>> q;
vector<int> ans;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)	dots[i][j] = input[j] - '0';
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (cost[i][j] || !dots[i][j]) continue;
			cnt = 0;
			q.push({ i, j });
			while (!q.empty())
			{
				t1 = q.front().first;
				t2 = q.front().second;
				q.pop();
				if (cost[t1][t2] || !dots[t1][t2]) continue;
				cost[t1][t2] = 1;
				cnt++;
				for (int k = 0; k < 4; k++)
				{
					ny = t1 + dy[k];
					nx = t2 + dx[k];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (cost[ny][nx] || !dots[ny][nx]) continue;
					q.push({ ny, nx });
				}
			}
			ans.emplace_back(cnt);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for (int i : ans) cout << i << "\n";
}