#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct grades
{
	string name;
	int korean;
	int english;
	int math;
};

int compare(grades a, grades b)
{
	if (a.korean != b.korean)	return a.korean > b.korean;
	if (a.english != b.english)	return a.english < b.english;
	if (a.math != b.math)	return a.math > b.math;
	return a.name < b.name;
}

int main()
{
	cin.tie(0)->sync_with_stdio(false);
	cout.tie(0)->sync_with_stdio(false);
	int n;
	scanf("%d\n", &n);
	vector<grades> students(n);
	for (int i = 0; i < n; i++)
	{
		cin >> students[i].name;
		scanf("%d %d %d", &students[i].korean, 
			&students[i].english, &students[i].math);
	}
	sort(students.begin(), students.end(), compare);
	for (int i = 0; i < students.size(); i++)
	{
		cout << students[i].name << endl;
	}
	return 0;
}