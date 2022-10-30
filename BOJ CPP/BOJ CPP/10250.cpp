#include <iostream>
using namespace std;

int main()
{
	int t, h, w, n, result;
	cin >> t;
	while (t != 0)
	{
		cin >> h >> w >> n;

		result = ((n-1) % h + 1) * 100 + ((n-1) / h + 1);
		
		cout << result << endl;
		t -= 1;
	}
	return 0;
}