#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int n, m, temp;
	cin >> n;
	vector<int> number_cards(n);
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		number_cards[i] = temp;
	}
	sort(number_cards.begin(), number_cards.end());

	cin >> m;
	while (m-- != 0)
	{
		cin >> temp;
		auto front = upper_bound(number_cards.begin(), number_cards.end(), temp);
		auto end = lower_bound(number_cards.begin(), number_cards.end(), temp);
		cout << front - end << " ";
	}
	return 0;
}