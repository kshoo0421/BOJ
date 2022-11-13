#include <iostream>
using namespace std;

void print_dot(const int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2) cout << " ";
		print_dot(n);
	}
	return 0;
}