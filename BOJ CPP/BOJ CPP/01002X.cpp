#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x1, x2, y1, y2, r1, r2, length, r1_m_r2, r1_p_r2;
	
	cin >> n;
	while (n-- != 0)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> r1 >> r2;
		length = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		r1_m_r2 = (r2 - r1) * (r2 - r1);
		r1_p_r2 = (r1 + r2) * (r1 + r2);
		if (x1 == x2 && y1 == y2 && r1 == r2) cout << "-1\n";
		else if (r1_m_r2 < length && r1_p_r2 > length)	cout << "2\n";	// 여기 수정 필요
		else if (r1_m_r2 == length || r1_p_r2 == length) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}