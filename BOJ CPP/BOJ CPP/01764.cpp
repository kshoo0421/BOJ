#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int n, m;	
	
	cin >> n >> m;
	string temp;
	set<string> cant_listen;
	set<string> cant_listen_and_see;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		cant_listen.insert(temp);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		auto it = cant_listen.find(temp);
		if (it != cant_listen.end())
		{
			cant_listen_and_see.insert(temp);
		}
	}

	cout << cant_listen_and_see.size() << endl;
	for (const string& name : cant_listen_and_see)
	{
		cout << name << endl;
	}
	return 0;
}