#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	string input;
	list<char> ll;
	cin >> n;
	while (n--)
	{
		cin >> input;
		ll.clear();
		auto cursur = ll.begin();
		for (auto i : input)
		{
			switch (i)
			{
			case '<' :
				if (cursur != ll.begin()) cursur--;
				break;
			case '>':
				if (cursur != ll.end()) cursur++;
				break;
			case '-':
				if (cursur != ll.begin())
				{
					cursur--;
					cursur = ll.erase(cursur);
				}
				break;
			default:
				ll.insert(cursur, i);
				break;
			}
		}
		for (auto i : ll) cout << i;
		cout << "\n";
	}
	return 0;
}