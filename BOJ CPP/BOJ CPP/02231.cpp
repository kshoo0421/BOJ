#include <iostream>
using namespace std;

int main()
{
	int in_num, con_num, sum = 0, temp = 0, small_con_num = 0;
	cin >> in_num;
	con_num = in_num;
	while (con_num > 0)
	{
		temp = con_num;
		sum = con_num;
		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == in_num)
			small_con_num = con_num;
		
		con_num--;
	}
	cout << small_con_num;
	return 0;
}