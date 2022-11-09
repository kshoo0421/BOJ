#include <iostream>
using namespace std;

int main()
{
	int tempIn, tempSum, maxScore = 0, maxIndex = 0;
	for (int i = 0; i < 5; i++)
	{
		tempSum = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> tempIn;
			tempSum += tempIn;
		}
		if (maxScore <tempSum)
		{
			maxIndex = i;
			maxScore = tempSum;
		}
	}
	cout << maxIndex + 1 << " " << maxScore;
	return 0;
}