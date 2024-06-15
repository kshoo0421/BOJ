#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
vector<pair<int, char>> prior_alphabet;

void add_prior_alphabet(string input)
{
	for (int i = 0; i < (int)prior_alphabet.size(); i++)
	{
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == prior_alphabet[i].second)
			{
				prior_alphabet[i].first += pow(10, input.length() - j - 1);
				input[j] = '0';
			}
		}
	}

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			prior_alphabet.emplace_back(make_pair(pow(10, input.length() - i - 1), input[i]));
			input[i] = '0';
			for (int j = i + 1; j < input.length(); j++)
			{
				if (input[j] == prior_alphabet[prior_alphabet.size() - 1].second)
				{
					prior_alphabet[prior_alphabet.size() - 1].first += pow(10, input.length() - j - 1);
					input[j] = '0';
				}
			}
		}
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, result = 0;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		add_prior_alphabet(input);
	}
	sort(prior_alphabet.rbegin(), prior_alphabet.rend());

	for (int i = 0; i < (int)prior_alphabet.size(); i++)
		result += prior_alphabet[i].first * (9 - i);

	cout << result;
	return 0;
}