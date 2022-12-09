#include <iostream>

int calculate_width(std::string number)
{
	int width = 1;
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] == '1') width += 2;
		else if (number[i] == '0')	width += 4;
		else width += 3;
		width += 1;
	}
	return width;
}

int main()
{
	std::string number;
	while (1)
	{
		std::cin >> number;
		if (number == "0") break;
		std::cout << calculate_width(number) << std::endl;
	}
	return 0;
}