#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int t;
	string a;
	cin >> t;
	while (t-- != 0)
	{
		cin >> a;
		if (a.length() >= 6 && a.length() <= 9) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}