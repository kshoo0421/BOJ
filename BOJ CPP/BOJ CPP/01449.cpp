#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, l, cur_tape = 0, count = 0;
	cin >> n >> l;
	vector<int> position(n);
	for (int i = 0; i < n; i++)	cin >> position[i];
	sort(position.begin(), position.end());

	for (int i = 0; i < n; i++)
	{
		if (cur_tape >= position[i]) continue;
		else
		{
			cur_tape = position[i] + l - 1;
			count++;
		}
	}
	cout << count;
	return 0;
}