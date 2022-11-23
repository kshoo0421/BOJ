#include <iostream>

int main()
{
	int arr[10], sum = 0, temp, temp_count, mode = 0, mode_count = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		temp_count = 0;
		for (int j = i; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				temp_count++;
				temp = arr[i];
			}
			if (temp_count > mode_count)
			{
				mode = temp;
				mode_count = temp_count;
			}
		}
	}

	std::cout << sum / 10 << std::endl;
	std::cout << mode << std::endl;
	return 0;
}