#include <iostream>

int main()
{
	int x, index = 1, left = 0, right = 1;
	bool isLeft = true;
	std::cin >> x;
	while (x-- != 0)
	{
		if (isLeft ? right == 1 : left == 1)
		{
			isLeft ? left++ : right++;
			isLeft = !(isLeft);
		}
		else
		{
			if (isLeft)
			{
				left++;
				right--;
			}
			else
			{
				right++;
				left--;
			}
		}
	}
	std::cout << left << "/" << right;
	return 0;
}