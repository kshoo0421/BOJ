#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	long long n, min_price, result = 0;
	cin >> n;
	vector<long long> length(n - 1);
	vector<long long> price(n);

	for (int i = 0; i < n - 1; i++)
	{
		cin >> length[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
	}
	min_price = price[0];

	for (int i = 0; i < n - 1; i++)
	{
		if (min_price > price[i]) min_price = price[i];
		result += length[i] * min_price;
	}
	cout << result;
	return 0;
}