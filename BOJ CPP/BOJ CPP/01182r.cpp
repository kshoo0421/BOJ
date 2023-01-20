#include <bits/stdc++.h>
using namespace std;
int n, s, cnt = 0;
vector<int> input;

void func(int cur, int tot)
{
	if (cur == n)
	{
		if (tot == s) cnt++;
		return;
	}
	func(cur + 1, tot);
	func(cur + 1, tot + input[cur]);
}

int main()  
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> s;
	input.assign(n, 0);
	for (int& i : input) cin >> i;
	func(0, 0);
	if (s == 0) cnt--;
	cout << cnt;
}