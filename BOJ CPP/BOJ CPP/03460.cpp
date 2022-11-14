#include <iostream>
using namespace std;

int main()
{
	int t, num, count;
	cin >> t;
	while (t-- != 0)
	{
		count = 0;
		cin >> num;
		while (num != 0)
		{
			if (num % 2 == 1) cout << count << " ";
			num /= 2;
			count++;
		}
		cout << endl;
	}
	return 0;
}