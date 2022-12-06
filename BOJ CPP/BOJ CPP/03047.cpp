#include <iostream>
#include <algorithm>

int main()
{
	int a[3];
	std::string abc;
	std::cin >> a[0] >> a[1] >> a[2] >> abc;
	std::sort(a, a + 3);
	for (int i = 0; i < 3; i++)
	{
		switch (abc[i])
		{
		case 'A' :
			printf("%d ", a[0]);
			break;
		case 'B' :
			printf("%d ", a[1]);
			break;
		case 'C' :
			printf("%d ", a[2]);
			break;
		}
	}
	return 0;
}