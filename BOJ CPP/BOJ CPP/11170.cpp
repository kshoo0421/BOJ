#include <iostream>
using namespace std;

int check_zero(int n)
{
	int count = 0;
	if (n == 0) return 1;
	while (n != 0)
	{
		if (n % 10 == 0) count++;
		n /= 10;
	}
	return count;
}

int check_number(int a, int b)
{
	int count = 0;
	for (int i = a; i <= b; i++)
		count += check_zero(i);
	return count;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, a, b;
	cin >> n;
	while (n-- != 0)
	{
		cin >> a >> b;
		cout << check_number(a, b) << "\n";
	}
	return 0;
}