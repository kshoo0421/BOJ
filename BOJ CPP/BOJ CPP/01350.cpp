#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, temp;
	long long int disk, result = 0;
	cin >> t;
	vector<long long> input(t);
	for (int i = 0; i < t; i++)
	{
		cin >> input[i];
	}
	cin >> disk;

	for(int i = 0; i < t; i++)
	{
		temp = (input[i] % disk == 0) ? input[i] / disk : (input[i] / disk) + 1;
		result += disk * temp;
	}
	cout << result;

	return 0;
}