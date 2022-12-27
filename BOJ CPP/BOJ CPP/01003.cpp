#include <iostream>
#include <vector>
using namespace std;
int count_0, count_1;

void fibonacci(const int& n)
{
	vector<pair<int, int>> fibo_vec;
	pair<int, int> temp;
	// 0
	temp.first = 1;
	temp.second = 0;
	fibo_vec.emplace_back(temp);
	// 1
	temp.first = 0;
	temp.second = 1;
	fibo_vec.emplace_back(temp);
	
	for (int i = 2; i <= n; i++)
	{
		temp.first = fibo_vec[i - 2].first + fibo_vec[i - 1].first;
		temp.second = fibo_vec[i - 2].second + fibo_vec[i - 1].second;
		fibo_vec.emplace_back(temp);
	}
	count_0 = fibo_vec[n].first;
	count_1 = fibo_vec[n].second;
	return;
}

int main()
{
    int n, input;
	scanf("%d", &n);
	while(n-- != 0)
	{
		count_0 = 0, count_1 = 0;
		scanf("%d", &input);
		fibonacci(input);
		printf("%d %d\n", count_0, count_1);
	}
	return 0;
}