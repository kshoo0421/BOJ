#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct memo {
	int index;
	int value;
	int rank;
};

int index_cmp(memo a, memo b)
{
	return a.index < b.index;
}

int value_cmp(memo a, memo b)
{
	return a.value < b.value;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, cur, rank = 0; cin >> n;
	vector<memo> input(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input[i].value;
		input[i].index = i;
	}
	sort(input.begin(), input.end(), value_cmp);
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cur = input[i].value;
			input[i].rank = rank;
		}
		else
		{
			if (input[i].value == cur)	input[i].rank = rank;
			else
			{
				input[i].rank = ++rank;
				cur = input[i].value;
			}
		}
	}
	sort(input.begin(), input.end(), index_cmp);
	for (auto i : input) cout << i.rank << " ";
	return 0;
}