#include <iostream>
using namespace std;

int main()
{
	int total, input;
	cin >> total;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		total -= input;
	}
	cout << total;
	return 0;
}