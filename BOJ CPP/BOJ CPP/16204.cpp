#include <iostream>

int main()
{
	int n, m, k, sum;
	std::cin >> n >> m >> k;
	// ī�� �� ���� : n, �ո� O : m, �޸� O : k
	sum = (m < k) ? m : k;
	sum += (n - m < n - k) ? n - m : n - k;
	std::cout << sum << std::endl;
	return 0;
}