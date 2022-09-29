#include <iostream>
using namespace std;

long long int newCal(long long int a, long long int b)
{
	long long int result = a * a - b * b;
	return result;
}

int main()
{
	long long int a, b;
	cin >> a >> b;
	cout << newCal(a, b) << endl;
	return 0;
}