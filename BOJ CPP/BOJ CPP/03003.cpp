#include <iostream>

int main()
{
	int a[6] = { 1, 1, 2, 2, 2, 8 };
	int b[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> b[i];
		std::cout << a[i] - b[i] << " ";
	}
	return 0;
}