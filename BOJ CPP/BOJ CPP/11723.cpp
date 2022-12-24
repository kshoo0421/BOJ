#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);
	bool b_set[20];
	int m, n;
	string command;
	for (int i = 0; i < 20; i++)
	{
		b_set[i] = false;
	}
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> command;
		if (command == "add")
		{
			cin >> n;
			if (n < 1 || n > 20) continue;
			b_set[n - 1] = true;
		}
		else if (command == "remove")
		{
			cin >> n;
			if (n < 1 || n > 20) continue;
			b_set[n - 1] = false;
		}
		else if (command == "check")
		{
			cin >> n;
			if (n < 1 || n > 20)
			{
				printf("0\n");
				continue;
			}
			printf("%d\n", b_set[n - 1] ? 1 : 0);
		}
		else if (command == "toggle")
		{
			cin >> n;
			if (n < 1 || n > 20) continue;
			b_set[n - 1] = !(b_set[n - 1]);
		}
		else if (command == "all")
		{
			for (int i = 0; i < 20; i++)
			{
				b_set[i] = true;
			}
		}
		else if (command == "empty")
		{
			for (int i = 0; i < 20; i++)
			{
				b_set[i] = false;
			}
		}
	}
	return 0;
}