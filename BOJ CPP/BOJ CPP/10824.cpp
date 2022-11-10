#include <iostream>
using namespace std;

char check_count(long long n)
{
	char count = 0;
	int temp = n;
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	return count;
}

long long attach_num(const long long& a, const long long& b)
{
	char b_count = 0;
	long long result = a, temp;
	b_count = check_count(b);
	while (b_count-- != 0)
		result *= 10;
	result += b;
	return result;
}

int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	a = attach_num(a, b);
	c = attach_num(c, d);
	cout << a + c;
	return 0;
}