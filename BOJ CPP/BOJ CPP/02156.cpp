#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, temp; cin >> n;
	vector<int> wine(n), total(n);
	if (n < 3) wine.assign(3, 0), total.assign(3, 0);
	for (int& i : wine) cin >> i;
	total[0] = wine[0], total[1] = wine[0] + wine[1], total[2] = max(wine[0], wine[1]) + wine[2];
	for (int i = 3; i < n; i++)
	{
		if (i == 3) temp = (total[i - 2] + wine[i] < total[i - 3] + wine[i - 1] + wine[i]) ? 
			total[i - 3] + wine[i - 1] + wine[i] : total[i - 2] + wine[i];
		else
		{
			temp = max(total[i - 4] + wine[i - 1] + wine[i], total[i - 3] + wine[i - 1] + wine[i]);
			temp = max(temp, total[i - 2] + wine[i]);
		}
		total[i] = temp;
	}
	temp = total[0];
	for (const int i : total) if (temp < i) temp = i;
	cout << temp;
	return 0;
}