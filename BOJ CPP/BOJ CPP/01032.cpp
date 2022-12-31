#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string answer;
	cin >> n;
	vector<string> inputs(n);

	for (int i = 0; i < n; i++)
	{
		cin >> inputs[i];
	}

	answer = inputs[0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < inputs[i].length(); j++)
		{
			if (answer[j] != inputs[i][j]) answer[j] = '?';
		}
	}
	cout << answer;
	return 0;
}