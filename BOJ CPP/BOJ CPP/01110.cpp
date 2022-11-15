#include <iostream>
using namespace std;

int make_new_num(int num)
{
	int new_num;
	new_num = num / 10 + num % 10;
	num = (num % 10) * 10 + new_num % 10;
	return num;
}

int main()
{
	int ori_n, new_n, count = 1;
	cin >> ori_n;
	new_n = make_new_num(ori_n);
	while (new_n != ori_n)
	{
		new_n = make_new_num(new_n);
		count++;
	}
	cout << count;
	return 0;
}