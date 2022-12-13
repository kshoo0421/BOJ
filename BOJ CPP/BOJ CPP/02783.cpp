#include <iostream>

int main()
{
	int n;
	float std_price, std_gram, temp_price, temp_gram, result;
	std::cin >> std_price >> std_gram >> n;
	result = std_price / std_gram * 1000;
	while (n-- != 0)
	{
		std::cin >> temp_price >> temp_gram;
		temp_price /= temp_gram;
		temp_price *= 1000;
		if (result > temp_price) result = temp_price;
	}
	printf("%.2f", result);
	return 0;
}