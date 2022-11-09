#include <iostream>
using namespace std;

int main()
{
	int sum = 0, num, min = 100;
	bool isAllEven = true;
	for (int i = 0; i < 7; i++)
	{
		cin >> num;
		if (num % 2 == 1)
		{
			sum += num;
			if (min > num)
				min = num;
			isAllEven = false;
		}
	}
	if (isAllEven)
	{
		cout << "-1";
	}
	else {
		cout << sum << endl;
		cout << min;
	}
	return 0;
}