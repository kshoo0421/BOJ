#include <iostream>

int main()
{
	int n, input[5];
	float sum;
	float price[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
	std::cin >> n;
	while (n-- != 0)
	{
		sum = 0;
		std::cin >>input[0] >> input[1] >> input[2] >> input[3] >> input[4];
		for (int i = 0; i < 5; i++)
			sum += input[i] * price[i];
		printf("$%.2f\n", sum);
	}
	return 0;
}