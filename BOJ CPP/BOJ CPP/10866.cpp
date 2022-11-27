#include <iostream>
#include <string>
#include <deque>
using namespace std;
deque<int> deq;

void push_front(const string& command)
{
	string str_num = command.substr(11);
	int n = stoi(str_num);
	deq.push_front(n);
}

void push_back(const string& command)
{
	string str_num = command.substr(10);
	int n = stoi(str_num);
	deq.push_back(n);
}

void pop_front()
{
	if (deq.size() == 0) cout << "-1" << '\n';
	else
	{
		cout << deq.front() << '\n';
		deq.pop_front();
	}
	return;
}

void pop_back()
{
	if (deq.size() == 0) cout << "-1" << '\n';
	else
	{
		cout << deq.back() << '\n';
		deq.pop_back();
	}
	return;
}

void size()
{
	cout << deq.size() << '\n';
	return;
}

void empty()
{
	if (deq.size() == 0) cout << "1" << '\n';
	else cout << "0" << '\n';
	return;
}

void front()
{
	if (deq.size() == 0) cout << "-1" << '\n';
	else cout << deq.front() << '\n';
	return;
}

void back()
{
	if (deq.size() == 0) cout << "-1" << '\n';
	else cout << deq.back() << '\n';
	return;
}

void command_center(const string& command)
{
	char spell = command[0];
	switch (spell)
	{
	case 'p':
		switch (command[5])
		{
		case 'f' :
			push_front(command);
			break;
		case 'b' :
			push_back(command);
			break;
		case 'r' :
			pop_front();
			break;
		case 'a' :
			pop_back();
			break;
		}
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
	case 'b':
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