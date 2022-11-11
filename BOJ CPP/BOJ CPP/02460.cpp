#include <iostream>
using namespace std;

int main()
{
	int input, output, cur = 0, max = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> output >> input;
		cur -= output;
		cur += input;
		if (max < cur) max = cur;
	}
	cout << max;
	return 0;
}