#include <iostream>

bool check_num(int num)
{
	if (num == 1000) return false;
	int n[3] = { 0, 0, 0 }, length = 0, index = 0;
	
	while (num != 0)
	{
		n[index++] = num % 10;
		num /= 10;
		length++;
	}

	if (length <= 2) return true;
	
	if (n[2] - n[1] == n[1] - n[0]) return true;
	else return false;
}

int main()
{
	int n, count = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (check_num(i)) count++;
	}
	std::cout << count;
	return 0;
}