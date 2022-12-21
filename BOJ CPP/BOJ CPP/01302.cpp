#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, max = 0;
	string book;
	cin >> n;
	map<string, int> book_list;
	for (int i = 0; i < n; i++)
	{
		cin >> book;
		if (book_list.find(book) != book_list.end())
		{
			book_list[book] += 1;
		}
		else
		{
			book_list.insert({ book, 1 });
		}
	}
	map<string, int>::iterator iterator = book_list.begin();
	for (; iterator != book_list.end(); iterator++)
	{
		if (iterator->second > max)
		{
			max = iterator->second;
			book = iterator->first;
		}
	}

	cout << book;
	return 0;
}