// C++�� ������ ū ���� ������ �����༭ �߰��� ������ �ؾ���. ���߿� �ٽ� �� ��.
#include <iostream>

int main()
{
	unsigned long long int a, b;
	std::cin >> a >> b;
	unsigned long long int c = a / b;
	std::cout << c << std::endl;
	std::cout << a - (b * c) << std::endl;
	return 0;
}