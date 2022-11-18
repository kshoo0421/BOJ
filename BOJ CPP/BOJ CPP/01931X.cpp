#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	bool isRange = false;
	int n, count = 0;
	vector<unsigned long long> temp_time(3);
	vector<unsigned long long> temp(2);
	vector<vector<unsigned long long>> time;
	vector<vector<unsigned long long>> room;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp_time[1] >> temp_time[2];
		temp_time[0] = temp_time[2] - temp_time[1];
		time.emplace_back(temp_time);
	}
	sort(time.begin(), time.end());

	for (int i = 0; i < n; i++)
	{
		isRange = false;
		for (int j = 0; j < count; j++)
		{
			if ((time[i][1] < room[j][0] && time[i][2] > room[j][0]) ||
				(time[i][1] < room[j][1] && time[i][2] > room[j][1]))
			{
				isRange = true;
				break;
			}
		}

		if(!isRange)
		{
			temp[0] = time[i][1];
			temp[1] = time[i][2];
			room.emplace_back(temp);
			count++;
		}
	}
	cout << count << endl;
	return 0;
}