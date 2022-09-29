// 입력이 없을 때는 cin.eof() 사용
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (!(cin>>a>>b).eof())
	{
		cout << a + b << endl;
	}
	return 0;
}