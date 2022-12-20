#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, bool>> que;

int check_count()
{
	bool is_print;
	int count = 0;
	pair<int, bool> temp_pair;
	while (que.size() != 0)
	{
		is_print = true;
		for (int i = 1; i < que.size(); i++)
		{
			if (que[0].first < que[i].first)
			{
				is_print = false;
				temp_pair = que[0];
				que.erase(que.begin());
				que.emplace_back(temp_pair);
				break;
			}
		}
		if (is_print)
		{
			temp_pair = que[0];
			que.erase(que.begin());
			count++;
		}
		if (is_print == true && temp_pair.second == true) break;
	}
	return count;
}

int main()
{
	int t, n, m;
	pair<int, bool> temp_pair;
	cin >> t;
	while (t-- != 0)
	{
		que.clear();
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> temp_pair.first;
			if (i == m) temp_pair.second = true;
			else temp_pair.second = false;
			que.emplace_back(temp_pair);
		}
		cout << check_count() << endl;
	}
	return 0;
}