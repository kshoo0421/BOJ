#include <bits/stdc++.h>
using namespace std;

int Cmp(pair<int, int>& p1, pair<int, int>& p2) {
	return p1.second < p2.second;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool isDone;
	int N, K, nxtPos = 0, cnt = 0;
	cin >> N >> K;

	vector<int> plan(K, 0);
	vector<pair<int, int>> curPlug;	
	for (int& i : plan) cin >> i; 
	for (int i = 0; i < K; i++) {
		sort(curPlug.begin(), curPlug.end(), Cmp);
		isDone = false;
		for (int j = i + 1; j <= K; j++) {
			if (j == K) {
				nxtPos = K + 1;
				break;
			}
			if (plan[j] == plan[i]) {
				nxtPos = j;
				break;
			}
		}
		for (auto& pii : curPlug) {
			if (plan[i] == pii.first) {
				pii.second = nxtPos;
				isDone = true;
				break;
			}
		}
		if (isDone) continue;
		if (curPlug.size() == N) {
			curPlug.pop_back();
			cnt++;
		}
		curPlug.emplace_back(make_pair(plan[i], nxtPos));
	}
	cout << cnt;
}