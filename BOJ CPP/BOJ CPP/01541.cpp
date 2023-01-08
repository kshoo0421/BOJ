#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	long long temp = 0, result = 0;
	bool is_minus = false;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if ((input[i] == '-' || input[i] == '+'))
		{
			if (is_minus == false)
			{
				result += temp;
				if (input[i] == '-') is_minus = true;
			}
			else result -= temp;
			temp = 0;
		}
		else
		{
			temp *= 10;
			temp += (long long)input[i] - '0';
		}
		if (i == input.length() - 1)
		{
			if (is_minus == true) result -= temp;
			else result += temp;
		}
	}
	cout << result;
	return 0;
}