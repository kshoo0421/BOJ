#include <iostream>
#define TIMES 31
#define MOD 1234567891
using namespace std;

int main()
{
	int a, L;
	unsigned long long r = 1, sum = 0, temp;
	cin >> L;
	char word[50];


	for (int i = 0; i < L; i++)
	{
		cin >> word[i];
		a = word[i] - 'a' + 1;

		sum = (sum + a * r) % MOD;

		r = (r * TIMES) % MOD;
	}
	cout << sum;
	return 0;
}