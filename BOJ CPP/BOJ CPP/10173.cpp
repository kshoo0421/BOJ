#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	bool is_found;
	string input;
	getline(cin, input);
	while (input != "EOI")
	{
		is_found = false;
		for (int i = 0; i < input.length() - 3; i++)
		{
			if (input[i] == 'N' || input[i] == 'n')
				if (input[i + 1] == 'E' || input[i + 1] == 'e')
					if (input[i + 2] == 'M' || input[i + 2] == 'm')
						if (input[i + 3] == 'O' || input[i + 3] == 'o')
							is_found = true;
			if (is_found) break;
		}

		if (is_found) cout << "Found\n";
		else cout << "Missing\n";
		getline(cin, input);
	}
	return 0;
}