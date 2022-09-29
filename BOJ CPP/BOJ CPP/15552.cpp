// 빠른 입출력을 위한 조건들 확인 필요
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		cout << b + c << "\n";
	}
	return 0;
}