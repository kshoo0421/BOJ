#include <iostream>

int main()
{
	int cur_x, cur_y, max_x, max_y, count, temp_x, temp_y;
	bool x_plus = true, y_plus = true;
	std::cin >> max_x >> max_y >> cur_x >> cur_y >> count;
	temp_x = count % (max_x * 2);
	temp_y = count % (max_y * 2);
	for (int i = 0; i < temp_x; i++)
	{
		if (x_plus)
		{
			if (cur_x < max_x) cur_x++;
			else
			{
				x_plus = false;
				cur_x--;
			}
		}
		else
		{
			if (cur_x > 0) cur_x--;
			else
			{
				x_plus = true;
				cur_x++;
			}
		}
	}
	
	for (int i = 0; i < temp_y; i++)
	{
		if (y_plus)
		{
			if (cur_y < max_y) cur_y++;
			else
			{
				y_plus = false;
				cur_y--;
			}
		}
		else
		{
			if (cur_y > 0) cur_y--;
			else
			{
				y_plus = true;
				cur_y++;
			}
		}
	}
	
	std::cout << cur_x << " " << cur_y;
	return 0;
}