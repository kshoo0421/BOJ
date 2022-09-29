#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int list[100];
	int count = 0;

	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> list[i];

	cin >> b;
	for (int i = 0; i < a; i++)
	{
		if (list[i] == b)
			count++;
	}
	cout << count;
	return 0;
}