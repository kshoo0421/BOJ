#include <iostream>
using namespace std;

int main()
{
	int n, m, k, temp, cur_count = 1;
	cin >> n >> m >> k;
	temp = n + m;
	while (cur_count <= m)
	{
		if (n < cur_count * 2)
		{
			cur_count--;
			break;
		}
		if (cur_count == m) break;
		cur_count++;
	}
	temp -= cur_count * 3;
	while (temp < k)
	{
		cur_count--;
		k -= 3;
	}
	cout << cur_count;
}