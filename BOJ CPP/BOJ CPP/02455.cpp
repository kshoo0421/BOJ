#include <iostream>
using namespace std;

int main()
{
	int out, in, cur = 0, max = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> out >> in;
		cur -= out;
		cur += in;
		if (max < cur) max = cur;
	}
	cout << max;
	return 0;
}