#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> stack;

void push(const string& command)
{
	string str_num = command.substr(5);
	int n = stoi(str_num);
	stack.emplace_back(n);
}

void pop()
{
	if (stack.size() == 0) cout << "-1" << '\n';
	else
	{
		cout << stack[stack.size() - 1] << '\n';
		stack.pop_back();
	}
	return;
}


void size()
{
	cout << stack.size() << '\n';
	return;
}

void empty()
{
	if (stack.size() == 0) cout << "1" << '\n';
	else cout << "0" << '\n';
	return;
}

void top()
{
	if (stack.size() == 0) cout << "-1" << '\n';
	else cout << stack[stack.size()-1] << '\n';
	return;
}

void command_center(const string& command)
{
	char spell = command[0];
	switch (spell)
	{
	case 'p' :
		if (command[1] == 'u') push(command);// push
		else pop(); // pop
		break;
	case 's' :	// size
		size();
		break;
	case 'e' :	// empty
		empty();
		break;
	case 't':	// top
		top();
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