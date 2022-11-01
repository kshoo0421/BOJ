#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int d, h, w;
	double k, temp_h, temp_w;
	cin >> d >> h >> w;
	k = sqrt((double)(d * d) / (double)(h * h + w * w));
	temp_h = floor(h * k);
	temp_w = floor(w * k);
	cout << (int)temp_h << ' ' << (int)temp_w << endl;
	return 0;
} 