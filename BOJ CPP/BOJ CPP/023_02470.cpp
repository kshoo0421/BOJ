#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, min, max, near0 = INT_MAX, bestL = 0, bestR = 1, left;
	cin >> n;
	vector<int> arr(n);
	for (int& i : arr) cin >> i;
	sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        left = arr[i];
        auto it = lower_bound(arr.begin() + i + 1, arr.end(), -left);

        if (it != arr.end() && abs(left + *it) < abs(near0)) { // 큰 거 1개 확인
            near0 = left + *it;
            bestL = left;
            bestR = *it;
        }
        if (it != arr.begin() + i + 1) {
            it--;
            if (abs(left + *it) < abs(near0)) { // 작은 거 1개 확인
                near0 = left + *it;
                bestL = left;
                bestR = *it;
            }
        }
    }
    if (bestL > bestR) swap(bestL, bestR);
    cout << bestL << " " << bestR;
}