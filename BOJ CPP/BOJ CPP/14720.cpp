#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int c, count = 0, index = 0;
	cin >> c;
	vector<int> shops(c);
	for (int i = 0; i < c; i++)
	{
		cin >> shops[i];
	}

	bool is_break = false;
	while (1)
	{
		while (shops[index] != 0)
		{
			index++;
			if (index == c)
			{
				is_break = true;
				break;
			}
		}
		if (is_break) break;

		if (shops[index] == 0)
		{
			index++;
			count++;
			if (index == c) break;
		}

		while (shops[index] != 1)
		{
			index++;
			if (index == c)
			{
				is_break = true;
				break;
			}
		}
		if (is_break) break;
		
		if (shops[index] == 1)
		{
			index++;
			count++;
			if (index == c) break;
		}

		while (shops[index] != 2)
		{
			index++;
			if (index == c)
			{
				is_break = true;
				break;
			}
		}
		if (is_break) break;

		if (shops[index] == 2)
		{
			index++;
			count++;
			if (index == c) break;
		}
	}
	cout << count;
	return 0;
}