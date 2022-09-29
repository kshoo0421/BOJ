#include <iostream>
using namespace std;

int main()
{
	char word[100];
	cin >> word;

	int i = 0;
	while (word[i] != NULL)
		i++;	// 길이 체크
	
	for (int j = 0; j < i; j++)
	{
		if (int(word[j]) >= 97)
			word[j] = char(int(word[j]) - 32);
		else
			word[j] = char(int(word[j]) + 32);
	}
	cout << word;
	return 0;
}