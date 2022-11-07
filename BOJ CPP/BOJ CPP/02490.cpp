#include <iostream>
using namespace std;

int main()
{
	int income, sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> income;
			sum += income;
		}
		switch (sum)
		{
		case 0 :
			cout << "D";
			break;
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "B";
			break;
		case 3 :
			cout << "A";
			break;
		case 4 :
			cout << "E";
			break;
		}
		cout << endl;
		sum = 0;
	}
	return 0;
}