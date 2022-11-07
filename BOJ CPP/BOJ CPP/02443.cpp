#include <iostream>
using namespace std;

void print_dot(int n)
{
	for (int i = 0; i < n; i++)
		cout << '*';
}

void print_space(int n)
{
	for (int i = 0; i < n; i++)
		cout << ' ';
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		print_space(i);
		print_dot(n - i - 1);
		print_dot(1);
		print_dot(n - i - 1);
		cout << endl;
	}
	return 0;
}