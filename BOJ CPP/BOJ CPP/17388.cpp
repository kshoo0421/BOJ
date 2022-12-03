#include <iostream>
using namespace std;

int main()
{
	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h >= 100) cout << "OK";
	else if (s < k)
	{
		if (s < h) cout << "Soongsil";
		else cout << "Hanyang";
	}
	else
	{
		if (k < h) cout << "Korea";
		else cout << "Hanyang";
	}
	return 0;
}