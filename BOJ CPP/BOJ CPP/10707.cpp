#include <iostream>

int main()
{
	int a, b, c, d, p;
	std::cin >> a >> b >> c >> d >> p;
	if (p < c)	// �⺻�� ������ ��
	{
		if (a * p > b) std::cout << b;
		else std::cout << a * p;
	}
	else
	{
		if (a * p > b + (p - c) * d) std::cout << b + (p - c) * d;
		else std::cout << a * p;
	}
	return 0;
}