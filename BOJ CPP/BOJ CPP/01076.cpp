#include <iostream>
#include <map>
using namespace std;

int main()
{
	long long value;
	string color;
	map<string, int> color_list;
	color_list.insert({ "black", 0 });
	color_list.insert({ "brown", 1 });
	color_list.insert({ "red", 2 });
	color_list.insert({ "orange", 3 });
	color_list.insert({ "yellow", 4 });
	color_list.insert({ "green", 5 });
	color_list.insert({ "blue", 6 });
	color_list.insert({ "violet", 7 });
	color_list.insert({ "grey", 8 });
	color_list.insert({ "white", 9 });
	cin >> color;
	value = color_list[color] * 10;
	cin >> color;
	value += color_list[color];
	cin >> color;
	for (int i = 0; i < color_list[color]; i++)
	{
		value *= 10;
	}
	cout << value;
}