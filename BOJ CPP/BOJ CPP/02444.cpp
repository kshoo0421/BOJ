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
		print_space(n- i -1);
		print_dot(i);
		print_dot(1);
		print_dot(i);
		cout << endl;
	}
	for (int i = 2; i <= n; i++)
	{
		print_space(i-1);
		print_dot(n - i);
		print_dot(1);
		print_dot(n - i);
		cout << endl;
	}
	return 0;
}