#include <iostream>
using namespace std;

int main()
{
	long long int n, m;
	cin >> n >> m;
	long long int sub = n - m;
	if (sub < 0)
		cout << -sub;
	else
		cout << sub;
	return 0;
}