#include <iostream>
using namespace std;

int main()
{
	int temp = 0, sum = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != ',')
		{
			temp *= 10;
			temp += (input[i] - '0');
		}
		else
		{
			sum += temp;
			temp = 0;
		}
	}
	sum += temp;
	cout << sum;
	return 0;
}