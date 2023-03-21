#include <iostream>
using namespace std;

int main()
{
	int toSchool, toPCRoom, toHagwon, toHome;
	cin >> toSchool >> toPCRoom >> toHagwon >> toHome;
	int sum = toSchool + toPCRoom + toHagwon + toHome;
	cout << sum / 60 << endl;
	cout << sum % 60 << endl;
	return 0;
}