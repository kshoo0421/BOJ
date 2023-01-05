#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct grade
{
	string name;
	int korean;
	int english;
	int math;
} Grade;

int cmp(const Grade& a, const Grade& b)
{
	if (a.korean != b.korean) return a.korean > b.korean;
	else if (a.english != b.english) return a.english < b.english;
	else if (a.math != b.math) return a.math > b.math;
	else return a.name < b.name;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin >> n;
	vector<Grade> students(n);
	for (int i = 0; i < n; i++)
	{
		cin >> students[i].name >> students[i].korean
			>> students[i].english >> students[i].math;
	}
	sort(students.begin(), students.end(), cmp);
	for (int i = 0; i < n; i++)	cout << students[i].name << "\n";
	return 0;
}