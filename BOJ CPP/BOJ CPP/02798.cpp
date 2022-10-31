#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, temp, result = 0;
	cin >> n >> m;

	int* list = new int[n];
	temp = n;

	while (temp != 0)
	{
		cin >> list[temp - 1];
		temp--;
	}
	sort(list, list + n);

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				temp = list[i] + list[j] + list[k];
				if (temp > m)	// 넘어가면 되돌리기
				{
					temp = result;
					break;
				}
				if (result < temp)
					result = temp;
			}
		}
	}
	cout << result;
	delete list;

	return 0;
}