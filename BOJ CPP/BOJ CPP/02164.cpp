#include <iostream>
#include <queue>
using namespace std;
queue<int> cards;

int result()
{
	int temp;
	while (cards.size() > 1)
	{
		cards.pop();
		if (cards.size() == 1) break;
		temp = cards.front();
		cards.pop();
		cards.push(temp);
	}
	return cards.front();
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cards.push(i);
	cout << result();
	return 0;
}