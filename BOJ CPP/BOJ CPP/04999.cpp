#include <iostream>
using namespace std;

int main()
{
	int j_count = 0, doc_count = 0;
	string j, doc;
	cin >> j >> doc;
	for (int i = 0; i < j.length(); i++)
	{
		if (j[i] == 'a') j_count++;
		if (j[i] == 'h') break;
	}

	for (int i = 0; i < doc.length(); i++)
	{
		if (doc[i] == 'a') doc_count++;
		if (doc[i] == 'h') break;
	}

	if (j_count >= doc_count) cout << "go";
	else cout << "no";
	return 0;
}
