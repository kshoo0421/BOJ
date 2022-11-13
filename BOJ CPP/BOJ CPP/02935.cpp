#include <iostream>
#include <string>
using namespace std;

int main()
{
	char operator_;
	string a, b, result;
	cin >> a >> operator_ >> b;
	switch (operator_)
	{
	case '+' :
		if (a.length() < b.length())
		{
			b[b.length() - a.length()] = '1';
			result = b;
		}
		else if(a.length() > b.length())
		{
			a[a.length() - b.length()] = '1';
			result = a;
		}
		else
		{
			result = a;
			result[0] = '2';
		}
		break;
	case '*' :
		result = "1";
		for (int i = 1; i < a.length() + b.length() - 1; i++)
			result += "0";
		break;
	default :
		break;
	};
	cout << result;

	return 0;
}