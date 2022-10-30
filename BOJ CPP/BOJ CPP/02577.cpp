#include <iostream>
using namespace std;

int main()
{
	int a, b, c, temp, result;
	int frequency[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	cin >> a >> b >> c;
	result = a * b * c;
	
	while (result != 0)
	{
		temp = result % 10;
		frequency[temp]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << frequency[i] << endl;

	return 0;
}