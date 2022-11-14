#include <iostream>
using namespace std;

inline int cal_y(const int& i)
{
	return (i / 30 + 1) * 10;
}

inline int cal_m(const int& i)
{
	return (i / 60 + 1) * 15;
}

int main()
{
	int n, y = 0, m = 0, input;
	cin >> n;
	while (n-- != 0)
	{
		cin >> input;
		y += cal_y(input);
		m += cal_m(input);
	}
	if (y < m) cout << "Y " << y;
	else if (y > m) cout << "M " << m;
	else cout << "Y M " << y;
	return 0;
}