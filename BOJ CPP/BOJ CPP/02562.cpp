#include <iostream>
using namespace std;

int main()
{
	int num[9], max = 0, maxNum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		if (max < num[i])
		{
			max = num[i];
			maxNum = i + 1;
		}
	}
	cout << max << endl;
	cout << maxNum;
	return 0;
}