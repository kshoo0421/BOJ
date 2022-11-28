#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	cout << k / m << " " << k - (k / m) * m;
	return 0;
}