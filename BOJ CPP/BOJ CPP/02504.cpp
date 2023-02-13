#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_error = false;
	int cur = 1;
	int sum[15] = { 0 };
	string input;
	stack<char> stk;
	cin >> input;
	for (char c : input)
	{
		if (c == '(' || c == '[')
		{
			if (stk.size() != 0 && cur != 1)
			{
				sum[stk.size()] += cur;
				cur = 1;
			}
			stk.push(c);
		}
		else
		{
			cur += sum[stk.size()];
			sum[stk.size()] = 0;
			if (stk.empty()) is_error = true;
			else if (stk.top() == '(')
			{
				if (c == ')') cur *= 2;
				else is_error = true;
			}
			else
			{
				if (c == ']') cur *= 3;
				else is_error = true;

			}
			if (is_error) break;
			
			stk.pop();
			if (stk.empty())
			{
				sum[0] += cur;
				cur = 1;
			}
		}
		if (is_error) break;
	}
	if (!stk.empty()) is_error = true;
	if (is_error) cout << "0";
	else cout << sum[0];
	return 0;
}