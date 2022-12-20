#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check_bracket(string sentence)
{
	stack<char> bracket;
	string::iterator iterator = sentence.begin();
	
	for (; iterator < sentence.end(); iterator++)
	{
		if (*iterator == '(' || *iterator == '[')
		{
			bracket.push(*iterator);
		}
		else if (*iterator == ')' || *iterator == ']')
		{
			if (bracket.size() == 0) return false;
			else
			{
				if (bracket.top() == '(' && *iterator == ')') bracket.pop();
				else if (bracket.top() == '[' && *iterator == ']') bracket.pop();
				else return false;
			}
		}
	}
	if (bracket.size() != 0) return false;
	return true;
}

int main()
{
	string sentence;
	getline(cin, sentence);
	while (sentence != ".")
	{
		check_bracket(sentence) ? cout << "yes\n" : cout << "no\n";
		getline(cin, sentence);
	}
	return 0;
}