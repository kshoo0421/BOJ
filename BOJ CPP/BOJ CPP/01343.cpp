#include <iostream>
#include <vector>
using namespace std;
vector<char> result;
int x_count = 0;
bool impossible = false;

void check_count()
{
	if (x_count == 2)
	{
		for (int j = 0; j < 2; j++)	result.emplace_back('B');
		x_count = 0;
	}
	else if (!(x_count == 2 || x_count == 0)) impossible = true;
	return;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'X')
		{
			x_count++;
			if (x_count == 4)
			{
				for (int j = 0; j < 4; j++)	result.emplace_back('A');
				x_count = 0;
			}
		}
		else
		{
			check_count();
			result.emplace_back('.');
		}
		if (impossible) break;
	}
	check_count();
	
	if (impossible) cout << "-1";
	else for (char i : result) cout << i;
	return 0;
}