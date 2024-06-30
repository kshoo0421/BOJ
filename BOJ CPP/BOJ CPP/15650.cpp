#include <bits/stdc++.h>
using namespace std;

int N, M;
bool b[9];

void Func(int cnt, int idx) {
	if (idx > N + 1) return;
	if (cnt == M) {
		for (int i = 1; i <= N; i++) if (b[i]) cout << i << " ";
		cout << "\n";
		return;
	}
	b[idx] = true;
	Func(cnt + 1, idx + 1);
	b[idx] = false;
	Func(cnt, idx + 1);
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> N >> M;
	Func(0, 1);
}