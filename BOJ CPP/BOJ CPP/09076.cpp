#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t, n[5];
	cin >> t;
	while (t-- != 0)
	{
		cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
		sort(n, n + 5);
		(n[3] - n[1] >= 4) ? cout << "KIN" << endl : cout << n[1] + n[2] + n[3] << endl;
	}
	return 0;
}