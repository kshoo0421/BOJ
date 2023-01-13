#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int l, c, n, b;
	char temp_c;
	string input;
	while (getline(cin, input))
	{
		l = 0, c = 0, n = 0, b = 0;
		for (int i = 0; i < input.length(); i++)
		{
			temp_c = input[i];
			if (temp_c == ' ') b++;
			else if (temp_c >= 'A' && temp_c <= 'Z') c++;
			else if (temp_c >= 'a' && temp_c <= 'z') l++;
			else n++;
		}
		cout << l << " " << c << " " << n << " " << b << "\n";
	}
	return 0;
}