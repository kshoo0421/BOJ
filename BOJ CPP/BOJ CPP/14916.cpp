#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, five, two;
	cin >> n;
	five = n / 5, n %= 5;
	if (n % 2 == 1) five--, n += 5;
	two = n / 2, n %= 2;
	
	if (five < 0) cout << "-1";
	else cout << five + two;
	
	return 0;
}