#include <iostream>

int main()
{
	int n, a, b, a_win = 0, b_win = 0;
	std::cin >> n;
	while (n-- != 0)
	{
		std::cin >> a >> b;
		if (a != b) (a > b) ? a_win++ : b_win++;
	}
	printf("%d %d", a_win, b_win);
	return 0;
}