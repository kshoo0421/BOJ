#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
	{
		switch (word[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			count++;
			break;
		default :
			break;
		}
	}
	cout << count;
}