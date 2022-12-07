#include <iostream>
#include <ctime>

int main()
{
	time_t cur_time = time(0);
	tm* cur_tm = gmtime(&cur_time);
	std::cout << cur_tm->tm_year + 1900 << std::endl;
	std::cout << cur_tm->tm_mon + 1 << std::endl;
	std::cout << cur_tm->tm_mday << std::endl;
	return 0;
}