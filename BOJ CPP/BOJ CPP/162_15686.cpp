#include <bits/stdc++.h>
#define X second
#define Y first
using namespace std;

int N, M;
vector<int> sumDist;
vector<pair<int, int>> houses, chickens, MChickens;

int GetDist(int c1, int r1, int c2, int r2) { return abs(r1 - r2) + abs(c1 - c2); }

int GetChikenDist() {
	int sum = 0, mn = 0, dist = 0;
	for (int i = 0; i < houses.size(); i++) {
		for (int j = 0; j < MChickens.size(); j++) {
			dist = GetDist(houses[i].X, houses[i].Y, MChickens[j].X, MChickens[j].Y);			
			if (j == 0) mn = dist;
			else mn = min(mn, dist);
		}
		sum += mn;
	}
	return sum;
}

void BackTracking(int index) {
	if (index >= chickens.size()) return;

	MChickens.emplace_back(chickens[index]);
	if (MChickens.size() == M) sumDist.emplace_back(GetChikenDist());
	else BackTracking(index + 1);

	MChickens.pop_back();
	BackTracking(index + 1);
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int input;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input;
			if (input == 1) houses.emplace_back(make_pair(i, j));
			if (input == 2) chickens.emplace_back(make_pair(i, j));
		}
	}
	BackTracking(0);
	sort(sumDist.begin(), sumDist.end());
	cout << sumDist[0];
}