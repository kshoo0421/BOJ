#include <iostream>
using namespace std;

int main()
{
	int a;
	bool list[31];
	for (int i = 0; i < 30; i++)	// 초기화
		list[i] = false;
	
	for (int i = 0; i < 28; i++)	// 입력
	{
		cin >> a;
		if (list[a-1] == true)
		{
			cout << "중복 제출";
			break;
		}
		list[a-1] = true;	// 제출 완료
	}

	for (int i = 0; i < 30; i++)	// 확인
		if (list[i] == false)	// 안냈으면
			cout << i+1 << endl;	// 출력
	return 0;
}