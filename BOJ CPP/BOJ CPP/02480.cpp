#include <iostream>

int main()
{
	int n1, n2, n3, result = 0;
	std::cin >> n1 >> n2 >> n3;
	if (n1 == n2 && n2 == n3)
		result = 10000 + 1000 * n1;
	else if (n1 == n2 || n2 == n3 || n1 == n3)
	{
		if (n1 == n2) result = 1000 + 100 * n1;
		else result = 1000 + 100 * n3;
	}
	else
	{
		int max = n1;
		if (max < n2) max = n2;
		if (max < n3) max = n3;
		result += 100 * max;
	}
	std::cout << result;
	return 0;
}