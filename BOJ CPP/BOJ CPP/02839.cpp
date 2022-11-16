#include <iostream>
using namespace std;

int find_count(const int& total)
{
	int cur, five = total / 5, three = 0;

	while (five > -1)
	{
		cur = total - five * 5;
		if (cur % 3 == 0)
		{
			three = cur / 3;
			break;
		}
		five--;
	}
	return five + three;
}

int main()
{
	int n;
	cin >> n;
	cout << find_count(n);
	return 0;
}