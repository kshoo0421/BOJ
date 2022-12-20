#include <iostream>
#include <set>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n, temp;
	cin >> n;
	set<int> have;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		have.insert(temp);
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (have.count(temp)) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}