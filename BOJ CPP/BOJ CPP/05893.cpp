#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string input;
	cin >> input;
	vector<int> result(input.length()+4);
	for (int i = 0; i < input.length(); i++)
		result[i] += (int)(input[i] - '0');

	for (int i = 4; i < input.length() + 4; i++)
		result[i] += (int)(input[i - 4] - '0');

	for (int i = input.length() + 3; i >= 0; i--)
	{
		if (result[i] >= 2)
		{
			result[i] -= 2;
			if (i == 0) printf("1");
			else result[i - 1] += 1;
		}
	}

	for (int i = 0; i < result.size(); i++)
		printf("%d", result[i]);

	return 0;
}