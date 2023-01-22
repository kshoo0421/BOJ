#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_in;
	char cam[9] = { 'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E' };
	string input;
	vector<char> ans;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		is_in = true;
		for (int j = 0; j < 9; j++)
		{
			if (input[i] == cam[j])
			{
				is_in = false;
				break;
			}
		}
		if (is_in) ans.emplace_back(input[i]);
	}
	for (char i : ans) cout << i;
}