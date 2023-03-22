#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int temp = 0, total_v = 0;
	string input, total_s = "";
	
	while (getline(cin, input))
	{
		if (input.empty()) {
			break;
		}
		total_s += input;
		cin.ignore(0);
	}
	
	for (char i : total_s) {
		if (i == ',') {
			total_v += temp;
			temp = 0;
		}
		else {
			temp *= 10;
			temp += (i - '0');
		}
	}
	total_v += temp;
	cout << total_v;
	return 0;
}