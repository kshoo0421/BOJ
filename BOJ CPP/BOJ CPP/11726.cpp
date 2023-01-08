#include <iostream>
#include <vector>
using namespace std;
vector<int> memo;

void set_memo(const int& n)
{
	n > 2 ? memo.assign(n + 1, 0) : memo.assign(3, 0);
	memo[0] = 0, memo[1] = 1, memo[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		memo[i] = memo[i - 1] + memo[i - 2];
		if (memo[i] >= 10007) memo[i] %= 10007;
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin >> n;
	set_memo(n);
	cout << memo[n];
	return 0;
}