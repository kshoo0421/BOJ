#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int d, m, sum_d;
	string date[7]{ "Wednesday", "Thursday", "Friday",
		"Saturday", "Sunday", "Monday", "Tuesday" };
	cin >> d >> m; 
	sum_d = d;
	switch (m)
	{
	case 12: sum_d += 30;
	case 11: sum_d += 31;
	case 10: sum_d += 30;
	case 9: sum_d += 31;
	case 8: sum_d += 31;
	case 7: sum_d += 30;
	case 6: sum_d += 31;
	case 5: sum_d += 30;
	case 4: sum_d += 31;
	case 3: sum_d += 28;
	case 2: sum_d += 31;
	case 1:	default: break;
	}
	sum_d %= 7;
	cout << date[sum_d];
	return 0;
}