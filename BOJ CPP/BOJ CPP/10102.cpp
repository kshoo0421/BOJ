#include <iostream>

int main()
{
	int v, a = 0, b = 0;
	std::string vote;
	std::cin >> v >> vote;
	for (int i = 0; i < v; i++)
	{
		if (vote[i] == 'A') a++;
		else b++;
	}
	if (a == b) printf("Tie");
	else (a < b) ? printf("B") : printf("A");
	return 0;
}