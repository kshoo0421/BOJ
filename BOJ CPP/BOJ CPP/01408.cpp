#include <iostream>
using namespace std;

int main()
{
	int cur_h, cur_m, cur_s, start_h, start_m, start_s;
	string cur_time, start_time;
	cin >> cur_time >> start_time;
	
	cur_h = (int)cur_time[0] * 10 + (int)cur_time[1];
	cur_m = (int)cur_time[3] * 10 + (int)cur_time[4];
	cur_s = (int)cur_time[6] * 10 + (int)cur_time[7];

	start_h = (int)start_time[0] * 10 + (int)start_time[1];
	start_m = (int)start_time[3] * 10 + (int)start_time[4];
	start_s = (int)start_time[6] * 10 + (int)start_time[7];

	start_s -= cur_s;
	if (start_s < 0)
	{
		start_s += 60;
		start_m -= 1;
	}

	start_m -= cur_m;
	if (start_m < 0)
	{
		start_m += 60;
		start_h -= 1;
	}

	start_h -= cur_h;
	if (start_h < 0)
	{
		start_h += 24;
	}
	printf("%02d:%02d:%02d", start_h, start_m, start_s);
	return 0;
}