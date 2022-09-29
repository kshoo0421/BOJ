#include <iostream>
using namespace std;

int main()
{
	char S[101];
	int alpa[27];
	cin >> S;
	
	for (int i = 0; i < 26; i++)
		alpa[i] = -1;

	for (int i = 0; i < 100; i++)
	{
		if (alpa[int(S[i]) - 97] == -1) // 현재 알파벳이 한 번도 안나왔다면
		{
			alpa[int(S[i]) - 97] = i;
		}
		if (S[i] == NULL)
			break;
	}
	
	for (int i = 0; i < 26; i++)
		cout << alpa[i] << ' ';
	return 0;
}