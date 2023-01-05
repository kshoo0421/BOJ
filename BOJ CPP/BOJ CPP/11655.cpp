#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string input;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			if (input[i] <= 'M') input[i] += 13;
			else input[i] -= 13;
		}
		else if (input[i] >= 'a' && input[i] <= 'z')
		{
			if (input[i] <= 'm') input[i] += 13;
			else input[i] -= 13;
		}
	}
	cout << input;
	return 0;
}