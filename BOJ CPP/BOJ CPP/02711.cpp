#include <iostream>
using namespace std;

string delete_wrong_spell(int point, const string& wrong_word)
{
	string right_word = wrong_word;
	for (int i = point - 1; i < wrong_word.length() - 1; i++)
	{
		right_word[i] = wrong_word[i + 1];
	}
	right_word.resize(wrong_word.length() - 1);
	return right_word;
}

int main()
{
	int t, a;
	string wrong_word, right_word;
	cin >> t;
	while (t-- != 0)
	{
		cin >> a >> wrong_word;
		right_word = delete_wrong_spell(a, wrong_word);
		cout << right_word << endl;
	}
	return 0;
}