#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool b = true;
	int idx = 0;
	string S1, S2;
	cin >> S1 >> S2;
	while (S2.size() > S1.size()) {
		if (S2.back() == 'B') {
			S2.pop_back();
			reverse(S2.begin(), S2.end());
		}
		else S2.pop_back();
	}
	cout << (S1 == S2);
}