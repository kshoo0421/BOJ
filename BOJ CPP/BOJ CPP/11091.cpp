#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool is_pang;
	bool alphabet[26];
	int n;
	string input;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		is_pang = true;
		fill(alphabet, alphabet + 26, false);
		
		getline(cin, input);
		for (char i : input)
		{
			if (i >= 'a' && i <= 'z') alphabet[i - 'a'] = true;
			if (i >= 'A' && i <= 'Z') alphabet[i - 'A'] = true;
		}
		for (bool i : alphabet)
		{
			if (!i)
			{
				is_pang = false;
				break;
			}
		}

		if (is_pang) cout << "pangram\n";
		else
		{
			cout << "missing ";
			for (int i = 0; i < 26; i++)
			{
				if (!alphabet[i]) cout << (char)(i + 'a');
			}
			cout << "\n";
		}
	}
	return 0;
}