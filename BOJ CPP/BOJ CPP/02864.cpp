#include <iostream>

int make_max_num(int num)
{
	int plus = 1, temp_num = num;
	while (temp_num != 0)
	{
		if (temp_num % 10 == 5) num += plus;
		plus *= 10;
		temp_num /= 10;
	}
	return num;
}

int make_min_num(int num)
{
	int minus = 1, temp_num = num;
	while (temp_num != 0)
	{
		if (temp_num % 10 == 6)	num -= minus;
		minus *= 10;
		temp_num /= 10;
	}
	return num;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", make_min_num(a) + make_min_num(b), make_max_num(a) + make_max_num(b));
	return 0;

}