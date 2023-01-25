#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool isbreak, isused[26];
	string input;
	getline(cin, input);
	while (!(input == "*"))
	{
		isbreak = false;
		fill(isused, isused + 26, false);
		for (char c : input) if (c != ' ') isused[c - 'a'] = true;
		for (bool b : isused) if (!b) { isbreak = true; break; };
		isbreak ?  cout << "N\n" : cout << "Y\n";
		getline(cin, input);
	}
}