#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string temp;
	getline(cin, temp);
	while (temp != "END")
	{
		reverse(temp.begin(), temp.end());
		cout << temp << endl;
		getline(cin, temp);
	}
	return 0;
}