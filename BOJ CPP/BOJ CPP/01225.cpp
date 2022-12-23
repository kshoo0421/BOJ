#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string a, b;
	int temp;
	long long int result = 0;
	vector<int> as;
	vector<int> bs;
	cin >> a >> b;
	for(int i = 0; i < a.length(); i++)
	{
		temp = a[i] - '0';
		as.emplace_back(temp);
	}
	for (int i = 0; i < b.length(); i++)
	{
		temp = b[i] - '0';
		bs.emplace_back(temp);
	}

	for (int i = 0; i < as.size(); i++)
	{
		for (int j = 0; j < bs.size(); j++)
		{
			result += (long long)as[i] * (long long)bs[j];
		}
	}
	cout << result;
	return 0;
}