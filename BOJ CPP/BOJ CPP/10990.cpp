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
	for (int i = 0; i < n; i++)
	{
		if (i == 0) 
		{
			print_space(n - i - 1);
			print_dot(1);
			cout << endl;
			continue;
		}
		print_space(n - i - 1);
		print_dot(1);	
		print_space(2 * i - 1);
		print_dot(1);
		cout << endl;
	}
	return 0;
}