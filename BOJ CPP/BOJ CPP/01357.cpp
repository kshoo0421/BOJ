#include <iostream>
using namespace std;

int rev(int num)
{
	int result = 0;
	while (num != 0)
	{
		result *= 10;
		result += num % 10;
		num /= 10;
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	cout << rev(rev(n) + rev(m));
	return 0;
}