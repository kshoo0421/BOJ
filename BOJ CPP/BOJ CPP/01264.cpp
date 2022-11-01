#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	string sentence;
	getline(cin, sentence);

	while (!(sentence.length() == 1 && sentence[0] == '#'))
	{
		count = 0;
		for (int i = 0; i < sentence.length(); i++)
		{
			if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i'
				|| sentence[i] == 'o' || sentence[i] == 'u')
				count++;
			else if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I'
				|| sentence[i] == 'O' || sentence[i] == 'U')
				count++;
		}
		cout << count << endl;
		getline(cin, sentence);
	}
}