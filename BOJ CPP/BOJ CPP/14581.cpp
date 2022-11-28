#include <iostream>

void print_fan()
{
	printf(":fan:");
}

int main()
{
	std::cin.tie(0);
	std::cout.tie(0);
	std::string name;
	std::cin >> name;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1) std::cout << ":" << name << ":";
			else print_fan();
		}
		printf("\n");
	}
	return 0;
}