#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	bool is_1_printed = false;
	string input;
	vector<int> binary;
	cin >> input;
	if (input == "0") printf("0");
	for (int i = input.size() - 1; i >= 0; i--)
	{
		n = input[i] - '0';
		for(int j = 0; j < 3; j++)
		{
			binary.emplace_back(n % 2);
			n /= 2;
		}
	}
	
	for (int i = binary.size() - 1; i >= 0; i--)
	{
		if (is_1_printed == false && binary[i] == 0) continue;
		if (is_1_printed == false) is_1_printed = true;
		printf("%d", binary[i]);
	}
}