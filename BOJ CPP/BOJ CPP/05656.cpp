#include <bits/stdc++.h>
using namespace std;
int n1, n2, cnt = 1;
string input;

bool check_cal()
{
	if (input == ">") return n1 > n2;
	if (input == ">=") return n1 >= n2;
	if (input == "<") return n1 < n2;
	if (input == "<=") return n1 <= n2;
	if (input == "==") return n1 == n2;
	if (input == "!=") return n1 != n2;
	return false;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n1 >> input >> n2;
	while (!(input == "E"))
	{
		cout << "Case " << cnt++ << ": ";
		if (check_cal()) cout << "true\n";
		else cout << "false\n";
		cin >> n1 >> input >> n2;
	}
}