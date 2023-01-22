#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int ioi = 0, joi = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.length() - 2; i++)
	{
		if (input[i] == 'J' && input[i + 1] == 'O' && input[i + 2] == 'I') joi++;
		if (input[i] == 'I' && input[i + 1] == 'O' && input[i + 2] == 'I') ioi++;
	}
	cout << joi << "\n" << ioi;
}