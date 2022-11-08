#include <iostream>
using namespace std;

void print_dot(const int& n)
{
	for (int i = 0; i < n; i++)
		cout << "*";
}

void print_space(const int& n)
{
	for (int i = 0; i < n; i++)
		cout << " ";
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		print_space(n - i);
		print_dot(i);
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		print_space(n - i);
		print_dot(i);
		cout << endl;
	}
}