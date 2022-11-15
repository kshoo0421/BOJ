#include <iostream>
using namespace std;

int make_self_num(int n, int count)
{
	int sum = n;
	while(count-- != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int check_digit(int n)
{
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

bool check_self_num(const int& ori_n)
{
	int digit_count = check_digit(ori_n), sum, temp;
	temp = ori_n - 9 * digit_count;
	while (temp++ < ori_n)
		if (make_self_num(temp, digit_count) == ori_n) return true;
	return false;
}

int main()
{
	for (int i = 1; i < 10000; i++)
		if (!check_self_num(i)) cout << i << endl;
	return 0;
}