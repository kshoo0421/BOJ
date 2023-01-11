#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string input;
	cin >> input;
	vector<string> vec(input.length());
	for (int i = 0; i < input.length(); i++)
		vec[i] = input.substr(i, input.length() - i);
	sort(vec.begin(), vec.end());
	for (string& i : vec) cout << i << "\n";
	return 0;
}