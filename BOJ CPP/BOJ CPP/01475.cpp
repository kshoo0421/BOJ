#include <iostream>
using namespace std;

int main()
{
	int temp, count = 0;
	int num[10] = { 0 };
	string input;
	cin >> input;
	for(int i = 0; i < input.length(); i++)
	{
		num[input[i] - '0']++;
	}
	temp = num[6] + num[9];
	num[6] = temp / 2;
	num[9] = temp - temp / 2;
	for (int i = 0; i < 10; i++)
	{
		if (count < num[i]) count = num[i];
	}
	cout << count;
	return 0;
}