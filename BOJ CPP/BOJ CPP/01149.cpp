#include <iostream>
#include <vector>
using namespace std;

typedef struct house
{
	int colors[3];
} House;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t, min;	cin >> t;
	vector<House> houses(t), costs(t + 1);
	for (int i = 0; i < t; i++) cin >> houses[i].colors[0] >> houses[i].colors[1] >> houses[i].colors[2];
	costs[1].colors[0] = 0,	costs[1].colors[1] = 0,	costs[1].colors[2] = 0;
	costs[1].colors[0] = houses[0].colors[0];
	costs[1].colors[1] = houses[0].colors[1];
	costs[1].colors[2] = houses[0].colors[2];

	for (int i = 2; i <= t; i++)
	{
		costs[i].colors[0] = houses[i - 1].colors[0]
			+ (costs[i - 1].colors[1] < costs[i - 1].colors[2] ? costs[i - 1].colors[1] : costs[i - 1].colors[2]);
		costs[i].colors[1] = houses[i - 1].colors[1]
			+ (costs[i - 1].colors[0] < costs[i - 1].colors[2] ? costs[i - 1].colors[0] : costs[i - 1].colors[2]);
		costs[i].colors[2] = houses[i - 1].colors[2]
			+ (costs[i - 1].colors[1] < costs[i - 1].colors[0] ? costs[i - 1].colors[1] : costs[i - 1].colors[0]);
	}
	min = costs[t].colors[0] < costs[t].colors[1] ? costs[t].colors[0] : costs[t].colors[1];
	min = min < costs[t].colors[2] ? min : costs[t].colors[2];
	cout << min;
	return 0;
}