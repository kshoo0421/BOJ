#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
ll n, k, start = 1, endn = 1;
vector<ll> lans;

bool check(int cm) {
	int count = 0;
	for (int i = 0; i < k; i++) {
		count += (int)(lans[i] / cm);
		if (count >= n) return true;
	} return false;
}

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	ll temp, result = 1;
	cin >> k >> n;
	lans.assign(k, 0);
	for (int i = 0; i < k; i++)
	{
		cin >> lans[i];
		if (endn < lans[i]) endn = lans[i];
	}
	sort(lans.begin(), lans.end());
	while (start <= endn)
	{
		temp = (start + endn) / 2;
		if (check(temp)) {
			result = max(result, temp);
			start = temp + 1;
		}
		else {
			endn = temp - 1;
		}
	}
	cout << result << endl;
	return 0;
}