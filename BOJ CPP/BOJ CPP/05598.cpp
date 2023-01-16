#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	string input;
	cin >> input;
	for (char& c : input)
	{
		if (c >= 'D' && c <= 'Z') c -= 3;
		else if (c >= 'A' && c <= 'C') c += 23;
	}
	cout << input;
	return 0;
}