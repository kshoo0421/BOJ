#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 1;
	string sentence;
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == ' ')
			count++;
	}

	if (sentence[0] == ' ')
		count--;

	if (sentence[sentence.length() - 1] == ' ')
		count--;
	
	cout << count;
	return 0;
}