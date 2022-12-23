#include <iostream>
int ground[500][500];

int main()
{
	bool is_break;
	int n, m, b, temp_b, min = 256, max = 0, result_height = 257;
	long long int cur, result_time = -1;
	scanf("%d %d %d", &n, &m, &b);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &ground[i][j]);
			if (max < ground[i][j]) max = ground[i][j];
			if (min > ground[i][j]) min = ground[i][j];
		}
	}

	for (int height = min; height <= max; height++)
	{
		is_break = false;
		temp_b = b;
		cur = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (ground[i][j] > height)
				{
					cur += 2 * (ground[i][j] - height);
					temp_b += (ground[i][j] - height);
				}
				if (ground[i][j] < height)
				{
					cur += (height - ground[i][j]);
					temp_b -= (height - ground[i][j]);
				}
			}
		}
		if (temp_b < 0) continue;

		if (result_time == -1)
		{
			result_time = cur;
			result_height = height;
		}
		else
		{
			if (result_time >= cur)
			{
				result_time = cur;
				result_height = height;
			}
		}
		if (result_time == 0) break;
	}
	printf("%lld %d", result_time, result_height);
	return 0;
}