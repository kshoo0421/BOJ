#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, temp;
	string input;
	cin >> n >> m;
	unordered_map<int, string> int_to_string;
	unordered_map<string, int> string_to_int;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		string_to_int.insert({ input, i });
		int_to_string.insert({ i, input });
	}

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (isdigit(input[0]))
		{
			temp = stoi(input);
			std::cout << int_to_string[temp] << "\n";
		}
		else
		{
			std::cout << string_to_int[input] << "\n";
		}
	}
	return 0;
}