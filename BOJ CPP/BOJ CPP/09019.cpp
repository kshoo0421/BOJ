#include <bits/stdc++.h>
using namespace std;
int t, a, b, tcur, tmp;
string tstr;
char dc[4] = { 'D', 'S', 'L', 'R' };
bool vis[10000];
queue<pair<int, string>> q;

int D(int a)
{
	return (a * 2) % 10000;
}

int S(int a)
{
	if (a == 0) a += 10000;
	return a - 1;
}

int L(int a)
{
	int tmp = a / 1000;
	return (a * 10 + tmp) % 10000;
}

int R(int a)
{
	int tmp = a % 10;
	return (tmp * 1000) + (a / 10);

}

int dslr(int a, int i)
{
	switch (i)
	{
	case 0: return D(a);
	case 1: return S(a);
	case 2: return L(a);
	case 3: return R(a);
	default: return 0;
	}
}

string check_dslr(const int& a, const int& b)
{
	while (!q.empty()) q.pop();
	fill(vis, vis + 10000, false);
	q.push({ a, "" });
	while (!q.empty())
	{
		tcur = q.front().first;
		tstr = q.front().second;
		q.pop();
		if (vis[tcur]) continue;
		vis[tcur] = true;
		if (tcur == b) return tstr;
		for (int i = 0; i < 4; i++)
		{
			tmp = dslr(tcur, i);
			if (vis[tmp]) continue;
			q.push({ tmp, tstr + dc[i] });
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << check_dslr(a, b) << "\n";
	}
}