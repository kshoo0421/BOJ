#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k, count = 1, temp; cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) q.push(i);
	cout << "<";
	while (q.size())
	{
		if (count == k)
		{
			cout << q.front();
			q.pop();
			count = 1;
			if (q.size()) cout << ", ";
		}
		else
		{
			temp = q.front();
			q.pop();
			q.push(temp);
			count++;
		}
	}
	cout << ">";

	return 0;
}