#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int count = 1;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ',') count++;
	}
	cout << count;
	return 0;
}