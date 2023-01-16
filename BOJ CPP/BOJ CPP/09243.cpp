#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_success = true;
	int n;
	string input1, input2;
	cin >> n >> input1 >> input2;
	for (int i = 0; i < input1.length(); i++)
	{
		if (n % 2 && input1[i] == input2[i]) is_success = false;
		else if (n % 2 == 0 && input1[i] != input2[i]) is_success = false;
	}
	if (is_success) cout << "Deletion succeeded";
	else cout << "Deletion failed";
}