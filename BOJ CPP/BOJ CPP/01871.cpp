#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, sum;	string input; cin >> n;
	while (n--)
	{
		sum = 0;
		cin >> input;
		for (int i = 0; i < 3; i++)	sum += (int)(input[i] - 'A') * pow(26, 2 - i);
		sum -= stoi(input.substr(4, 7));
		if (sum >= -100 && sum <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}
}