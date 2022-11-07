#include <iostream>
using namespace std;

void print_dot(int n)
{
	for (int i = 0; i < n; i++)
		cout << '*';
}

void print_space(int n)
{
	for (int i = 0; i < 2*n; i++)
		cout << ' ';
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		print_dot(i + 1);
		print_space(n - i - 1);
		print_dot(i + 1);
		cout << endl;
	}
	
	for (int i = n - 2; i >= 0; i--)
	{
		print_dot(i + 1);
		print_space(n - i - 1);
		print_dot(i + 1);
		cout << endl;
	}
	return 0;
}