#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char num_list[16] = { '0', '1', '2', '3', '4', '5','6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F' };
	int m, n;
	vector<int> result;
	scanf("%d %d", &m, &n);
	if (m == 0) printf("0");
	while (m != 0)
	{
		result.emplace_back(m % n);
		m /= n;
	}
	for (int i = result.size() - 1; i >= 0 ; i--)
	{
		printf("%c", num_list[result[i]]);
	}
	return 0;
}