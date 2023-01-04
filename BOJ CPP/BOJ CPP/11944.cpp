#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> single_num;

int check_count(int num)
{
	int result = 0;
	while (num != 0)
	{
		result++;
		single_num.emplace_back(num % 10);
		num /= 10;
	}
	reverse(single_num.begin(), single_num.end());
	return result;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, count;
	cin >> n >> m;
	count = check_count(n);
	m = (count * n > m) ? m : count * n;
	for (int i = 0; i < m; i++)
	{
		cout << single_num[i % count];
	}
	return 0;
}