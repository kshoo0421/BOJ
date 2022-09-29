// C++는 범위가 큰 수를 지원을 안해줘서 추가로 연구를 해야함. 나중에 다시 할 것.
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