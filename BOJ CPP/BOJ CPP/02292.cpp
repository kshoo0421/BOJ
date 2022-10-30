#include <iostream>
using namespace std;

int main()
{
	//	1 6 12 18 24
	int n, count = 1, plus = 0, cur_boundary = 1;
	cin >> n;
	while (n > cur_boundary)
	{
		count++;
		plus += 6;
		cur_boundary += plus;
	}
	cout << count << endl;
	return 0;
}