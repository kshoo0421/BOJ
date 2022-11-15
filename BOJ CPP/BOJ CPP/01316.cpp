#include <iostream>
using namespace std;

bool check_group_word(const string& word)
{
	bool alphabets[26];
	char spelling, count = 0, length = word.length();
	for (int i = 0; i < 26; i++)
		alphabets[i] = false;
	for (int i = 0; i < word.length(); i++)
	{
		spelling = word[i];
		while (word[i + 1] == spelling)
		{
			if (i == word.length()-1)	break;
			i++;
		}
		if (alphabets[spelling - 'a']) return false;
		alphabets[spelling - 'a'] = true;
	}
	return true;
}

int main()
{
	int n, count = 0;
	string word;
	cin >> n;
	while (n-- != 0)
	{
		cin >> word;
		if(check_group_word(word)) count++;
	}
	cout << count;
	return 0;
}