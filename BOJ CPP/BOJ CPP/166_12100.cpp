#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    long long N, T, P, totalBundles = 0, penBundles, remainingPens;
    cin >> N;
    vector<long long> tshirts(6);
    for (auto& ll : tshirts) cin >> ll;
    cin >> T >> P;
    for (auto ll : tshirts) totalBundles += (ll +T - 1) / T;
    penBundles = N / P;
    remainingPens = N % P;
    cout << totalBundles << "\n" << penBundles << " " << remainingPens;
}