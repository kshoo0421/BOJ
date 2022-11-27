#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);

	int sum = 0, temp, x = 0, y = 8;
	int height[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		sum += height[i];
	}
	sort(height, height + 9);

	temp = sum - 100;
	while (temp != height[x] + height[y])
	{
		if (temp < height[x] + height[y])
		{
			y--;
		}
		else
		{
			x++;
		}
	}
	height[x] = 100;
	height[y] = 100;

	sort(height, height + 9);

	for (int i = 0; i < 7; i++)
	{
		cout << height[i] << '\n';
	}
	return 0;
}