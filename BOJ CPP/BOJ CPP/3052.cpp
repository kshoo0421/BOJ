#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int reserve_list[10];
	int count = 0, temp;
	bool isOverlap = false;
	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++)
	{
		temp = a[i] % 42;	
		for (int j = 0; j < count; j++)	// 현재까지 나온 나머지와 중복되는지 체크
		{
			if (temp == reserve_list[j])
			{
				isOverlap = true;
				break;
			}
			else if (j != count)	// 나머지 다 체크
				continue;
		}
		if (isOverlap == false)
		{
			reserve_list[count] = temp;
			count++;
		}
		isOverlap = false;
	}
	cout << count;

	return 0;
}