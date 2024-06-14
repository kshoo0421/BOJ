#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, tmp; 	
	cin >> n;
	string str;
	stack<int> stk;
	while (n--) {
		cin >> str;
		if (str[0] == 'p' && str[1] == 'u') {
			cin >> str;
			tmp = stoi(str);
			stk.push(tmp);
		}
		else {
			switch (str[0]) {
			case 'p' :
				if (stk.size()) {
					cout << stk.top() << "\n";
					stk.pop();
				}
				else cout << "-1\n";
				break;
			case 's' :
				cout << stk.size() << "\n";
				break;
			case 'e' :
				if (stk.empty()) cout << "1\n";
				else cout << "0\n";
				break;
			case 't':
				if (stk.size()) cout << stk.top() << "\n";
				else cout << "-1\n";
				break;
			}
		}
	}
	return 0;
}