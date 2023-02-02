#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	char c;
	string input;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		c = input[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			cout << c;
			i += 2;
		}
		else cout << c;
	}

	return 0;
}