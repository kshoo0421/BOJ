#include <iostream>
using namespace std;

int fibo(int n)
{
	if (n > 1) return fibo(n - 1) + fibo(n - 2);
	else if (n == 1) return 1;
	else return 0;
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}