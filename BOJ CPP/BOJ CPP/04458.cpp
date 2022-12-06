#include <iostream>
#include <string>

int main()
{
	int t;
	std::string sentence;
	std::cin >> t;
	std::cin.ignore();
	while (t-- != 0)
	{
		getline(std::cin, sentence);
		if (sentence[0] >= 'a' && sentence[0] <= 'z')
		{
			sentence[0] += ('A' - 'a');
		}
		std::cout << sentence << std::endl;
	}
	return 0;
}