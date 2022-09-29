#include <iostream>
using namespace std;

int main()
{
	char string[101];
	cin >> string;
	int i = 0;

	while (string[i] != NULL)
		i++;
	cout << i;
	return 0;
}