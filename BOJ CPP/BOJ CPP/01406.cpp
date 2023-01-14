#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	char command, letter;
	int n;
	string input;
	list<char> ll;
	list<char>::iterator itr;
	cin >> input >> n;
	for (const char& i : input) ll.push_back(i);
	itr = ll.end();
	while (n--)
	{
		cin >> command;
		switch (command)
		{
		case 'L':
			if (itr != ll.begin()) itr--;
			break;
		case 'D':
			if (itr != ll.end()) itr++;
			break;
		case 'B':
			if (itr != ll.begin())
			{
				itr--;
				itr = ll.erase(itr);
			}
			break;
		case 'P':
			cin >> letter;
			ll.insert(itr, letter);
			break;
		default: break;
		}
	}
	for (char i : ll) cout << i;
	return 0;
}