#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int N, K, delCnt = 0;
    string Num, result = "";
    cin >> N >> K >> Num;
    for (char c : Num) {
        while (!result.empty() && result.back() < c && delCnt < K) {
            result.pop_back();
            delCnt++;
        }
        result += c;
    }
    result.resize(N - K);
    cout << result;
}