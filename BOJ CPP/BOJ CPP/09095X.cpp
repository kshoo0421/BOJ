#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int cal_count(const int& input)
{
	int count = 1, num1 = input, num2 = 0, num3 = 0;
	int max2 = input / 2, max3 = input / 3;
	bool is_2_done = false, is_3_done = true;
	switch (input)
	{
	case 2: count++;
	case 1: break;
	default:
		while (1)
		{
			if (is_2_done == false)
			{
				num2++, num1 -= 2;
				if (num2 == max2) is_2_done = true;
			}
			else if (is_3_done == true)
			{
				num3++, num2 = 0;
				num1 = input - 3 * num3;
				if (num1 >= 3) is_3_done = false;
			}
			else
			{
				num1 -= 2, num2 += 1;
				if (num1 < 2) is_3_done = true;
			}
			count += (factorial(num1 + num2 + num3) /
				(factorial(num1) * factorial(num2) * factorial(num3)));
			if (num1 == input % 3 && num2 == 0) break;
		}
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, input;
	cin >> n;
	while (n-- != 0)
	{
		cin >> input;
		cout << cal_count(input) << "\n";
	}
	return 0;
}