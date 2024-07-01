#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int N, mn = 1;
    cin >> N;
    vector<int> weights(N);
    for (int& i : weights) cin >> i;
    sort(weights.begin(), weights.end());
    for (int i : weights) {
        if (i > mn) break;
        mn += i;
    }
    cout << mn;
}