#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n;
	int arr[10];
	cin >> n;
	while (n-- != 0)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		cout << arr[7] << endl;
	}
	return 0;
}