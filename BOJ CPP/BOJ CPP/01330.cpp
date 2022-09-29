#include <iostream>
using std::cout;

int main()
{
	int a, b;
	std::cin >> a >> b;
	if (a > b)
		cout << '>';
	else if (a < b)
		cout << '<';
	else cout << "== ";
	return 0;
}