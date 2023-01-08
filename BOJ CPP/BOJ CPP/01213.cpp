#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	char odd = 0;
	int alphabet_count[26] = { 0 };
	bool no_pel = false;

	string input;
	cin >> input;
	
	for (int i = 0; i < input.length(); i++)
	{
		alphabet_count[input[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet_count[i] % 2 == 1)
		{
			if (odd != 0) no_pel = true;
			else odd = i + 'A';
		}
		if (no_pel) break;
	}

	if (no_pel) cout << "I'm Sorry Hansoo";
	else
	{
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < alphabet_count[i] / 2; j++)
				cout << (char)('A' + i);
		}
		if(odd != 0) cout << odd;
		for (int i = 25; i >= 0; i--)
		{
			for (int j = 0; j < alphabet_count[i] / 2; j++)
				cout << (char)('A' + i);
		}
	}
	return 0;
}