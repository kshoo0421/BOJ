#include <iostream>

int main()
{
	int a, b, sum = 0, temp = 1, count;
	int arr[1000];
	for (int i = 0; i < 1000;)
	{
		count = i;
		for (int j = 0; j < temp; j++)
		{
			arr[i++] = temp;
			if (i >= 1000) break;
		}
		temp++;
		if (i >= 1000) break;
	}

	std::cin >> a >> b;
	for (; a <= b; a++)
		sum += arr[a-1];
	std::cout << sum;
}