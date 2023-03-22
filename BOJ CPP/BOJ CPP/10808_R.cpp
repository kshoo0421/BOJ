#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int alphabet[26] = { 0 };
	string input;
	cin >> input;
	for (char i : input) alphabet[i - 'a']++;
	for (int i = 0; i < 26; i++) cout << alphabet[i] << " ";
	return 0;
}