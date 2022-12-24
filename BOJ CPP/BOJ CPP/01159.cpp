#include <iostream>
using namespace std;

int main()
{
	bool is_predaja = true;
	int n, total_count = 0;
	int a_count[26];
	char alphabet;
	string member;

	for (int i = 0; i < 26; i++) a_count[i] = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> member;
		a_count[member[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (a_count[i] >= 5)
		{
			printf("%c", i + 'a');
			is_predaja = false;
		}
	}
	if (is_predaja) printf("PREDAJA");
	return 0;
}