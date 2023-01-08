#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int count = 1;
	bool is_zero;
	string input;
	cin >> input;
	is_zero = input[0] == '0' ? true : false;
	for (int i = 0; i < input.length(); i++)
	{
		if ((is_zero == true && input[i] == '0') || (is_zero == false && input[i] == '1')) continue;
		else
		{
			is_zero = !(is_zero);
			count++;
		}
	}
	cout << count / 2;
	return 0;
}