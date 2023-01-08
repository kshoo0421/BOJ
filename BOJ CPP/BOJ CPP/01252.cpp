#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_upper = false; int sum;
	string input[2], temp;
	cin >> input[0] >> input[1];
	for (int i = 0; i < 2; i++)
	{
		reverse(input[i].begin(), input[i].end());
		for (int j = input[i].length() - 1; j > 0; j--)
		{
			if (input[i][j] == '0') input[i].erase(input[i].end() - 1);
			else break;
		}
	}
	if (input[0].length() < input[1].length()) 
	{ temp = input[0]; input[0] = input[1]; input[1] = temp; }
	
	for (int i = 0; i < input[0].length(); i++)
	{
		sum = 0;
		if (i < input[1].length())
			if (input[1][i] == '1') sum++;
		if (input[0][i] == '1') sum++;
		if (is_upper) { sum++; is_upper = false; }
		if (sum > 1) { sum -= 2; is_upper = true; }
		input[0][i] = (sum == 1) ? '1' : '0';
	}
	if (is_upper) { input[0] += '1'; }
	reverse(input[0].begin(), input[0].end());
	cout << input[0];
	return 0;
}