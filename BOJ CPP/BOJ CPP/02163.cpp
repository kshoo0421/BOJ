#include <iostream>
using namespace std;

int main()
{
	int n, m, total;
	cin >> n >> m;
	total = 0;
	while (n != 1)
	{
		total += 1;
		total += (m - 1);
		n--;
	}
	cout << total;
}