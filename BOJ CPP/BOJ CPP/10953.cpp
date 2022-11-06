#include <iostream>
using namespace std;

int main()
{
	int t, a, b;
	string temp;
	cin >> t;
	while (t != 0)
	{
		cin >> temp;
		a = (int)temp[0] - '0';
		b = (int)temp[2] - '0';
		cout << a + b << endl;
		t--;
	}
	return 0;
}