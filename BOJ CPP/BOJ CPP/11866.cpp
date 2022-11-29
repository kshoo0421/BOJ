#include <iostream>
#include <vector>
using namespace std;
vector<int> list;

void print_yosipus(const int& k)
{
	int size = list.size(), index_k = k - 1;
	cout << "<";
	while (size != 0)
	{
		while (index_k > size - 1) index_k -= size;
		cout << list[index_k];
		list.erase(list.begin() + index_k);
		index_k += k - 1;
		size -= 1;
		if (size != 0) cout << ", ";
	}
	cout << ">";
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		list.emplace_back(i + 1);
	print_yosipus(k);
	return 0;
}