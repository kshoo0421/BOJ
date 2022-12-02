#include <iostream>
using namespace std;

int main()
{
	int age, weight;
	string name;
	cin >> name >> age >> weight;
	while (name != "#" && age != 0 && weight != 0)
	{
		cout << name << " ";
		if (age > 17 || weight >= 80)
			cout << "Senior" << endl;
		else cout << "Junior" << endl;
		cin >> name >> age >> weight;
	}
	return 0;
}