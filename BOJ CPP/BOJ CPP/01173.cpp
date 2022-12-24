#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int n, m, M, t, r, cur_beat, training_time = 0, total_time = 0;
	cin >> n >> m >> M >> t >> r;
	cur_beat = m;
	while (training_time != n)
	{
		if (cur_beat == m && cur_beat + t > M)
		{
			break;
		}
		else if (cur_beat + t > M)
		{
			cur_beat -= r;
			total_time++;
			if (cur_beat < m) cur_beat = m;
		}
		else
		{
			cur_beat += t;
			total_time++;
			training_time++;
		}
	}
	if (training_time != n) printf("-1");
	else printf("%d", total_time);
	return 0;
}