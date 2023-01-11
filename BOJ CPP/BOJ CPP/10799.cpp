#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int count = 0;
	string input;
	stack<char> stk;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (i < input.length() - 1)
		{
			if (input[i] == '(' && input[i + 1] == ')')
			{
				count += stk.size();
				i++;
			}
			else if (input[i] == '(') stk.push('(');
			else
			{
				stk.pop();
				count++;
			}
		}
		else
		{
			stk.pop();
			count++;
		}
	}
	cout << count;
	return 0;
}