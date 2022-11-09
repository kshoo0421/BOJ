#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int r;
	cin >> r;
	double pi = M_PI;
	double taxi = 2 * r * r;
	printf("%.6f\n%.6f", (double)r * (double)r * pi, taxi);
	return 0;
}