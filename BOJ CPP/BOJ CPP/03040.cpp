#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_break = false;
	int gap = 0, index1 = 0, index2 = 8, dwarfs[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> dwarfs[i];
		gap += dwarfs[i];
	}
	gap -= 100;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (dwarfs[i] + dwarfs[j] == gap)
			{
				index1 = i, index2 = j;
				is_break = true;
				break;
			}
		}
		if (is_break) break;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == index1 || i == index2) continue;
		else cout << dwarfs[i] << "\n";
	}

	return 0;
}