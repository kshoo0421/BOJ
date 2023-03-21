#include <iostream>
using namespace std;

void make_reverse_tri(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j < 2 * (n - i - 1) + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void make_other_tri(int n)
{
	n -= 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j < 2 * i + 3; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	make_reverse_tri(n);
	make_other_tri(n);
}