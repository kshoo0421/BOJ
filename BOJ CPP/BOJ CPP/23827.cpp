#include <iostream>
#include <vector>
typedef long long ll;

int main()
{
	int n, rest = 0, temp;
	ll answer = 0;
	scanf("%d", &n);
	std::vector<ll> input(n);
	std::vector<ll> sum(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &input[i]);
		if (i == 0) sum[i] = input[i];
		else sum[i] = sum[i - 1] + input[i];
	}

	for (int i = 0; i < n; i++)
	{
		answer += (input[i] * (sum[n-1] - sum[i])) % 1000000007;
	}
	answer %= 1000000007;
	printf("%lld", answer);
	return 0;
}