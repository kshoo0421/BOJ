#include <iostream>
#include <string>
#include <vector>

int main()
{
	int n;
	std::string sentence;
	std::cin >> n;
	std::cin >> std::ws;
	std::vector<std::string> sentences(n);
	for (int i = 0; i < n; i++)
	{
		getline(std::cin, sentence);
		std::cout << i + 1 << ". " << sentence << std::endl;
	}
	return 0;
}