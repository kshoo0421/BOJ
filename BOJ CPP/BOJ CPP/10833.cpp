#include <iostream>
using namespace std;

int main()
{
	int n, student, apple, total = 0, temp;
	cin >> n;
	while(n-- != 0)
	{
		cin >> student >> apple;
		temp = apple / student;
		total += apple - student * temp;
	}
	cout << total;
	return 0;
}