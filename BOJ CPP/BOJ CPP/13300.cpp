#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k, sex, grade, count = 0;
	vector<pair<int, int>> students(6);
	for (int i = 0; i < 6; i++)
	{
		students[i].first = 0;
		students[i].second = 0;
	}
	cin >> n >> k;
	while (n-- != 0)
	{
		cin >> sex >> grade;
		(sex == 0) ? students[grade - 1].first += 1 : students[grade - 1].second += 1;
	}
	for (int i = 0; i < 6; i++)
	{
		count += students[i].first / k;
		count += students[i].second / k;
		if (students[i].first % k != 0) count++;
		if (students[i].second % k != 0) count++;
	}
	cout << count;
	return 0;
}