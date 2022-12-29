#include <iostream>

int main()
{
	int count = 0;
	std::string input;

	std::cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (i < input.size() - 2 && input[i] == 'd' &&
			input[i + 1] == 'z' && input[i + 2] == '=')	i += 2;
		else if (i < input.size() - 1)
		{
			if (input[i + 1] == '=' || input[i + 1] == '-')	i++;
			else if (input[i + 1] == 'j')
			{
				if (input[i] == 'l' || input[i] == 'n')	i++;
			}
		}
		count++;
	}
	printf("%d", count);
	return 0;
}