#include <iostream>
using namespace std;

int main()
{
	int fbi_count = 0;
	int num[5] = { 0 };
	string name[5];
	for (int i = 0; i < 5; i++)
		cin >> name[i];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < name[i].length() - 2; j++)
		{
			if (name[i][j] == 'F')
			{
				if (name[i][j+1] == 'B')
				{
					if (name[i][j + 2] == 'I')
					{
						num[fbi_count++] = i + 1;
						break;
					}
				}
			}
		}
	}
	if (fbi_count == 0) cout << "HE GOT AWAY!";
	else
	{
		for (int i = 0; i < fbi_count; i++)
		{
			cout << num[i];
			if (i != fbi_count - 1)
				cout << ' ';
		}
	}
	return 0;
}