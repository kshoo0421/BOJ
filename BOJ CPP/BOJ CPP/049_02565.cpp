#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int N;
    cin >> N;
    vector<int> b_positions(N), lis;
    vector<pair<int, int>> wires(N);
    for (auto& vpii : wires) cin >> vpii.first >> vpii.second;
    sort(wires.begin(), wires.end());
    for (int i = 0; i < N; i++) b_positions[i] = wires[i].second;
    for (int i = 0; i < N; ++i) {
        auto it = lower_bound(lis.begin(), lis.end(), b_positions[i]);
        if (it == lis.end()) lis.push_back(b_positions[i]);
        else *it = b_positions[i];
    }
    cout << N - lis.size();
}