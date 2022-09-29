#include <iostream>
using namespace std;

int main()
{
	char grade[3];
	float point = 0;
	cin >> grade;
	switch (grade[0])
	{
	case 'A' :
		point += 1;
	case 'B':
		point += 1;
	case 'C':
		point += 1;
	case 'D':
		point += 1;
	case 'F':
		break;
	default:
		cout << "오류 발생" << endl;
	}
	switch (grade[1])
	{
	case '+':
		point += 0.3;
		break;
	case '-':
		point -= 0.3;
		break;
	default:
		break;
	}
	cout.precision(1);
	cout << fixed;
	cout << point;
	return 0;
}