#include <iostream>
using namespace std;
int cnt = 0;

int recursion(const string& s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) {
	return recursion(s, 0, s.length() - 1);
}


int main()
{
	int n;
	string input;
	cin >> n;
	while (n-- != 0)
	{
		cnt = 0;
		cin >> input;
		printf("%d ", isPalindrome(input));
		printf("%d\n", cnt);
	}
	return 0;
}