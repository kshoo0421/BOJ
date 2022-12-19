#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

vector<int> goal_array;
vector<bool> is_push;
bool is_error = false;

void make_function()
{
	int cur_num, push_index = 0;
	stack<int> first_stack;
	stack<int> second_stack;
	for (int i = goal_array.size(); i > 0; i--)	// 역순으로 push
	{
		first_stack.push(i);
	}

	cur_num = first_stack.top();
	first_stack.pop();
	second_stack.push(cur_num);
	is_push.emplace_back(true);

	for (int i = 0; i < goal_array.size(); i++)
	{
		while (1)
		{
			if (second_stack.size() == 0)
			{
				if (first_stack.size() == 0)
				{
					is_error = true;
					return;
				}
				cur_num = first_stack.top();
				first_stack.pop();
				second_stack.push(cur_num);
				is_push.emplace_back(true);
				continue;
			}
			else if (goal_array[i] == second_stack.top())
			{
				second_stack.pop();
				is_push.emplace_back(false);
				break;
			}
			else
			{
				if (first_stack.size() == 0)
				{
					is_error = true;
					return;
				}
				cur_num = first_stack.top();
				first_stack.pop();
				second_stack.push(cur_num);
				is_push.emplace_back(true);
				continue;
			}
		}
	}
	return;
}

int main()
{
	int n, temp;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		goal_array.emplace_back(temp);
	}
	make_function();
	if (!is_error)
	{
		for (int i = 0; i < is_push.size(); i++)
		{
			if (is_push[i] == true) printf("+\n");
			else printf("-\n");
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}