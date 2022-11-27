#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int t, temp_int;
	string temp_string;
	cin.tie(0);
	cout.tie(0);
	
	cin >> t;
	vector<pair<int, string>> ages_names(t);
	
	for (int i = 0; i < t; i++)
	{
		cin >> temp_int >> temp_string;
		ages_names[i].first = temp_int;
		ages_names[i].second = temp_string;
	}

	stable_sort(ages_names.begin(), ages_names.end(), compare);

	for (int i = 0; i < t; i++)
	{
		cout << ages_names[i].first << " " << ages_names[i].second << '\n';
	}
	return 0;
}