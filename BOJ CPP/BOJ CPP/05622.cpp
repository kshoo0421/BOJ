#include <iostream>
using namespace std;

int call_time(char alp)
{
	switch (alp - 'A')
	{
	case 0:
	case 1:
	case 2:
		return 3;
	case 3:
	case 4:
	case 5:
		return 4;
	case 6:
	case 7:
	case 8:
		return 5;
	case 9:
	case 10:
	case 11:
		return 6;
	case 12:
	case 13:
	case 14:
		return 7;
	case 15:
	case 16:
	case 17:
	case 18:
		return 8;
	case 19:
	case 20:
	case 21:
		return 9;
	case 22:
	case 23:
	case 24:
	case 25:
		return 10;
	default: return 11;
	}
	return 0;
}

int main()
{
	int sum = 0;
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
		sum += call_time(word[i]);
	cout << sum;
}