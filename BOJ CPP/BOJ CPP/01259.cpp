#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool isTrue = false;
	while (n != 0)
	{
		if (n < 10) isTrue = true;	// ���ڸ���
		else if (n < 100)	// ���ڸ���
		{
			if (n / 10 == n % 10) isTrue = true;
		}
		else if (n < 1000)	// ���ڸ���
		{
			if (n / 100 == n % 10) isTrue = true;
		}
		else if (n < 10000) /// ���ڸ���
		{
			if (n / 1000 == n % 10)
				if ((n / 100) % 10 == (n / 10) % 10) isTrue = true;
		}
		else
		{
			if (n / 10000 == n % 10)
				if ((n / 1000) % 10 == (n / 10) % 10)	isTrue = true;
		}

		if (isTrue)
		{
			cout << "yes" << endl;
			isTrue = false;
		}
		else cout << "no" << endl;

		cin >> n;
	}
}