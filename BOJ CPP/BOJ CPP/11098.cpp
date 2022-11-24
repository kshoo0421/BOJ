#include <iostream>
using namespace std;

int main()
{
	int n, p;
	unsigned long long price, max_price = 0;
	string name, max_name;
	cin >> n;
	while (n-- != 0)
	{
		max_price = 0;
		cin >> p;
		while (p-- != 0)
		{
			cin >> price >> name;
			if (price > max_price)
			{
				max_price = price;
				max_name = name;
			}
		}
		cout << max_name << endl;
	}
	return 0;
}