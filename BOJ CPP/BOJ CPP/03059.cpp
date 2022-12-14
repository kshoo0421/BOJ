#include <iostream>

int main()
{
	int n, sum;
	std::string word;
	bool isAlphabet[26];
	
	std::cin >> n;
	while (n-- != 0)
	{
		sum = 0;
		for (int i = 0; i < 26; i++)
			isAlphabet[i] = false;

		std::cin >> word;

		for (int i = 0; i < word.length(); i++)
			isAlphabet[word[i] - 'A'] = true;

		for(int i = 0; i < 26; i++)
			if (isAlphabet[i] == false) sum += i + 'A';

		std::cout << sum << std::endl;
	}
	return 0;
}