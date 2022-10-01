#include <iostream>
using namespace std;

int main()
{
	int input[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> input[i];
	}

	if (input[0] - input[1] == 1)	// descending 확인
	{
		for (int i = 0; i < 7; i++)
		{
			if (input[i] - input[i + 1] == 1)
			{
				if (i != 6)	continue;
				else
				{
					cout << "descending" << endl;
					break;
				}
			}
			else
			{
				cout << "mixed" << endl;
				break;
			}
		}
	}
	else if (input[1] - input[0] == 1)	// ascending 확인
	{
		for (int i = 0; i < 7; i++)
		{
			if (input[i + 1] - input[i] == 1)
			{
				if (i != 6)	continue;
				else
				{
					cout << "ascending" << endl;
					break;
				}
			}
			else
			{
				cout << "mixed" << endl;
				break;
			}
		}
	}
	else cout << "mixed" << endl;
	
	return 0;
}