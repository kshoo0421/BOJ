#include <iostream>

int main()
{
	int month, date, sum = 0;
	int dates[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	std::string days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	std::cin >> month >> date;
	for (int i = 0; i < month - 1; i++)
	{
		sum += dates[i];
	}
	sum += date;
	std::cout << days[sum % 7];
	return 0;
}