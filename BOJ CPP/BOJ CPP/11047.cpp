#include <iostream>
#include <vector>

int main()
{
	int n, k, count = 0, temp;
	std::cin >> n >> k;
	std::vector<int> array(n);
	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	for (int i = n - 1; i >= 0; i--)
	{
		temp = k / array[i];
		count += temp;
		k -= temp * array[i];
		if (k == 0) break;
	}
	std::cout << count;
	return 0;
}