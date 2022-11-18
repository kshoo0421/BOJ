#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n, sum = 0;
	std::cin >> n;
	std::vector<int> array(n);
	for (int i = 0; i < n; i++)
		std::cin >> array[i];

	std::sort(array.begin(), array.end());
	for (int i = 0; i < n; i++)
		sum += array[i] * (n - i);
	std::cout << sum;
	return 0;
}