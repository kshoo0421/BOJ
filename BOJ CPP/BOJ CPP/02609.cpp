#include <iostream>
using namespace std;

inline void switch_num(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

int main()
{
	int num1, num2, temp1, temp2, com_min, com_max;
	cin >> num1 >> num2;

	if (num1 < num2) switch_num(num1, num2);
	
	temp1 = num1;
	temp2 = num2;
	while(temp1 % temp2 != 0)
	{
		switch_num(temp1, temp2);
		temp2 %= temp1;
	}
	com_min = temp2;

	com_max = (num1 * num2) / com_min;

	cout << com_min << endl;
	cout << com_max << endl;
	return 0;
}