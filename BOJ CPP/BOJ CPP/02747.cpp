#include <iostream>
#include <vector>
using namespace std;

int fibo(int n)
{
	n += 1;
	vector<int> f(n);
	for (int i = 0; i < n; i++)
	{
		if (i == 0) f[i] = 0;
		else if (i == 1) f[i] = 1;
		else f[i] = f[i - 1] + f[i - 2];
	}
	return f[n - 1];
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}