#include <iostream>
using namespace std;

int main()
{
	int result;
	cin >> result;
	if (result >= 90)
		cout << "A";
	else if (result >= 80)
		cout << "B";
	else if (result >= 70)
		cout << "C";
	else if (result >= 60)
		cout << "D";
	else
		cout << "F";
	return 0;
}