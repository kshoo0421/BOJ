#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int alphabet[26];
	int max = 0, most_freq = 0;
	bool overlap = false;

	getline(cin, word);
	for (int i = 0; i < 26; i++)
		alphabet[i] = 0;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
			alphabet[word[i] - 65]++;
		else if (word[i] >= 97 && word[i] <= 122)
			alphabet[word[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == max)
		{
			overlap = true;
			continue;
		}
		else if (alphabet[i] > max)
		{
			most_freq = i;
			max = alphabet[i];
			overlap = false;
		}
	}
	if (overlap == true)
		cout << '?';
	else
		cout << char('A' + most_freq);

	return 0;
}