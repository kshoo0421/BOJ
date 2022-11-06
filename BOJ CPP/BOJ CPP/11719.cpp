#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	
	while (1)
	{
		getline(cin, word);
		if (cin.eof() == true) { break; }
		cout << word << endl;
	} 
	return 0;
}