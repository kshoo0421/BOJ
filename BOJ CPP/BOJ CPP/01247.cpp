#include <iostream>
using namespace std;

int main()
{
	int over = 0;
	long long int n, input, sum;
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		cin >> n;
		while (n-- != 0)
		{
			cin >> input;
			if (input > 0 && sum + input < sum) over++;
			else if (input < 0 && sum + input > sum) over--;
			sum += input;
		}
		if (over > 0) cout << "+" << endl;
		else if (over < 0) cout << "-" << endl;
		else
		{
			if (sum == 0) cout << "0" << endl;
			else if (sum > 0) cout << "+" << endl;
			else cout << "-" << endl;
		}
	}
	return 0;
}