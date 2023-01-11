#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	long long n, m, input, sum;
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	cin >> n >> m;
	while (n--)
	{
		cin >> input;
		pq.push(input);
	}
	while (m--)
	{
		sum = pq.top();
		pq.pop();
		sum += pq.top();
		pq.pop();
		pq.push(sum), pq.push(sum);
	}
	sum = 0;
	while (pq.size())
	{
		sum += pq.top();
		pq.pop();
	}
	cout << sum;
	return 0;
}