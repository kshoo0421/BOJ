#include <iostream>

int main()
{
	int my, mm, md, sy, sm, sd, old;
	std::cin >> my >> mm >> md >> sy >> sm >> sd;
	
	if (my == sy) old = 0;
	else
	{
		old = sy - my - 1;
		if (mm < sm) old++;
		else if (mm == sm)
		{
			if (md <= sd) old++;
		}
	}

	std::cout << old << std::endl;
	std::cout << sy - my + 1 << std::endl;
	std::cout << sy - my << std::endl;
}