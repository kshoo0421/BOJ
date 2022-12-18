#include <iostream>
using namespace std;

bool check_666(int num)
{
	char c_num[10] = { 0 };
	int index = 0;
	while (num != 0)
	{
		c_num[index] = num % 10;
		index++;
		num /= 10;
	}
	for (int i = 0; i <= index - 2; i++)
	{
		if (c_num[i] == 6 && c_num[i + 1] == 6 && c_num[i + 2] == 6)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int n, count = 0, num = 665;
	cin >> n;
	while (n != count)
	{
		num++;
		if (check_666(num)) count++;
	}
	cout << num;
	return 0;
}