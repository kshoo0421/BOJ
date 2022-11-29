#include <iostream>
#include <stack>
using namespace std;

bool isVPS(const string& sentence)
{
	stack<bool> bracket_stack;
	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == '(') bracket_stack.push(true);
		else
		{
			if (bracket_stack.size() == 0) return false;
			else bracket_stack.pop();
		}
	}
	if (bracket_stack.size() > 0) return false;
	return true;
}

int main()
{
	cin.tie(0);
	cout.tie(0);

	int n;
	string sentence;
	cin >> n;
	while (n-- != 0)
	{
		cin >> sentence;
		if (isVPS(sentence))  cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}