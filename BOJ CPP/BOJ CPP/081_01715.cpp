#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, temp, sum = 0;
	multiset<int> card;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		card.insert(temp);
	}

	while (1) {
		if (card.size() == 1) break;
		auto i = card.begin();
		auto first = i;
		auto second = ++i;
		temp = *first + *second;
		sum += temp;
		card.erase(first);
		card.erase(second);
		card.insert(temp);
	}
	cout << sum;
	return 0;
}