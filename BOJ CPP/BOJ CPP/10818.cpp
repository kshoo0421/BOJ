#include <iostream>
using namespace std;

int main()
{
	int n;
	int temp, max = -1000001, min = 1000001;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp >= max) max = temp;
		if (temp <= min) min = temp;
	}
	cout << min << ' ' << max << endl;
	return 0;
}