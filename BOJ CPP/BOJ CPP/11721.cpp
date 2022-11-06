#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	getline(cin, word);
	for (int i = 0; i < word.length(); i++)
	{
		cout << word[i];
		if (i % 10 == 9) cout << endl;
	}
	return 0;
}