#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, input; 
	cin >> n; 
	while (n--)
	{
		cin >> input;
		if (input == 0)
		{
			if (pq.size() == 0) cout << "0\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else pq.push(input);
	}
	return 0;
}