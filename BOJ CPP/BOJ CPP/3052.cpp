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
		for (int j = 0; j < count; j++)	// ������� ���� �������� �ߺ��Ǵ��� üũ
		{
			if (temp == reserve_list[j])
			{
				isOverlap = true;
				break;
			}
			else if (j != count)	// ������ �� üũ
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