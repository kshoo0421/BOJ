#include <iostream>
using namespace std;

int main()
{
	int n, date, month, year, cur, oldest = 21000000, youngest = 19890000;
	string name, old_name, young_name;
	cin >> n;
	while (n-- != 0)
	{
		cin >> name >> date >> month >> year;
		cur = year * 10000 + month * 100 + date;
		if (oldest > cur)
		{
			oldest = cur;
			old_name = name;
		}
		if (youngest < cur)
		{
			youngest = cur;
			young_name = name;
		}
	}
	cout << young_name << endl;
	cout << old_name << endl;
	return 0;
}