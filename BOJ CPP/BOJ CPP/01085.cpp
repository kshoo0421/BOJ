#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h, x_length, y_length;
	cin >> x >> y >> w >> h;
	
	x_length = (w - x < x) ? w - x : x;
	y_length = (h - y < y) ? h - y : y;

	if (x_length < y_length)	cout << x_length;
	else cout << y_length;
	return 0;
}