#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> que;

void push(const string& command)
{
	string str_num = command.substr(5);
	int n = stoi(str_num);
	que.push(n);
}

void pop()
{
	if (que.size() == 0) cout << "-1" << '\n';
	else
	{
		cout << que.front() << '\n';
		que.pop();
	}
	return;
}

void size()
{
	cout << que.size() << '\n';
	return;
}

void empty()
{
	if (que.size() == 0) cout << "1" << '\n';
	else cout << "0" << '\n';
	return;
}

void front()
{
	if (que.size() == 0) cout << "-1" << '\n';
	else cout << que.front() << '\n';
	return;
}

void back()
{
	if (que.size() == 0) cout << "-1" << '\n';
	else cout << que.back() << '\n';
	return;

}

void command_center(const string& command)
{
	char spell = command[0];
	switch (spell)
	{
	case 'p':
		if (command[1] == 'u') push(command);// push
		else pop(); // pop
		break;
	case 's':	// size
		size();
		break;
	case 'e':	// empty
		empty();
		break;
	case 'f':	// front
		front();
		break;
	case 'b' :
		back();
		break;
	default: break;
	}
	return;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n;
	string command;
	cin >> n;
	while (n-- != -1)
	{
		getline(cin, command);
		command_center(command);
	}
	return 0;
}