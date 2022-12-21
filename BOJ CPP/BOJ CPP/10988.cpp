#include <iostream>
using namespace std;

int word_check(string word)
{
	for (int i = 0; i < word.length() / 2; i++)
	{
		if (word[i] != word[word.length() - i - 1]) return 0;
	}
	return 1;
}

int main()
{
	string word;
	cin >> word;
	cout << word_check(word);
	return 0;
}