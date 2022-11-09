#include <iostream>
using namespace std;

int main()
{
	int yes = 0, no = 0, n, comment;
	cin >> n;
	while (n!=0)
	{
		cin >> comment;
		if (comment) yes++;
		else no++;
		n--;
	}
	if (yes > no) cout << "Junhee is cute!";
	else  cout << "Junhee is not cute!";
	return 0;
}