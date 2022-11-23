#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int temp, total = 0;
	int top5_index[5];
	vector<pair<int, int>> grade_index(8);

	for (int i = 0; i < 8; i++)
	{
		std::cin >> grade_index[i].first;
		grade_index[i].second = i + 1;
	}
	sort(grade_index.rbegin(), grade_index.rend());
	
	for (int i = 0; i < 5; i++)
	{
		total += grade_index[i].first;
		top5_index[i] = grade_index[i].second;
	}
	cout << total << endl;

	sort(top5_index, top5_index + 5);
	for (int i = 0; i < 5; i++)
	{
		cout << top5_index[i] << " ";
	}
	return 0;
}