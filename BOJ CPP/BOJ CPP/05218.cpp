#include <iostream>
using namespace std;

void print_diff(char a, char b)
{
	int result = b - a;
	if (result < 0) result += 26;
	cout << result << " ";
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	string input1, input2;
	cin >> n;
	while (n-- != 0)
	{
		cin >> input1 >> input2;
		cout << "Distances: ";
		for (int i = 0; i < input1.length(); i++)
		{
			print_diff(input1[i], input2[i]);
		}
		cout << "\n";
	}
	return 0;
}