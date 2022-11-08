#include <iostream>
using namespace std;

void print_result(const int& type);

void compare(const int& n1, const int& n2)
{
	char type = 0;
	if (n1 % n2 == 0)	type = 1;
	else if (n2 % n1 == 0) type = 0;
	else type = 2;
	print_result(type);
}

void print_result(const int& type)
{
	switch (type)
	{
	case 0:
		cout << "factor" << endl;
		break;
	case 1:
		cout << "multiple" << endl;
		break;
	case 2:
		cout << "neither" << endl;
		break;
	default:
		cout << "error" << endl;
		break;
	}
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	while (!(n1 == 0 && n2 == 0))
	{
		compare(n1, n2);
		cin >> n1 >> n2;
	}
	return 0;
}