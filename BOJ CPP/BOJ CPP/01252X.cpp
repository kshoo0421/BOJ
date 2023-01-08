#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	bool is_upper = false;
	int temp, i, count = 0;
	string a, b, s_temp;
	vector<int> result;
	cin >> a >> b;
	for (i = 0; i < a.length(); i++)
	{
		if (a[i] == '0') count++;
		else break;
	}
	a = a.substr(count, a.length() - count);
	
	count = 0;
	for (i = 0; i < b.length(); i++)
	{
		if (b[i] == '0') count++;
		else break;
	}
	b = b.substr(count, b.length() - count);

	if (a.length() < b.length())
	{
		s_temp = a;
		a = b;
		b = s_temp;
	}

	for(i = 1; i <= b.size(); i++)
	{
		temp = (a[a.size() - i] - '0') + (b[b.size() - i] - '0');
		if (is_upper)
		{
			temp++;
			is_upper = false;
		}
		if (temp >= 2)
		{
			temp -= 2;
			is_upper = true;
		}
		result.emplace_back(temp);
	}
	for (; i <= a.size(); i++)
	{
		temp = a[a.size() - i] - '0';
		if (is_upper)
		{
			temp++;
			is_upper = false;
		}
		if (temp >= 2)
		{
			temp -= 2;
			is_upper = true;
		}
		result.emplace_back(temp);
	}
	if (is_upper) result.emplace_back(1);
	
	for (i = result.size() - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}