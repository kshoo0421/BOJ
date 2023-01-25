#include <bits/stdc++.h>
using namespace std;

int main()
{
	// 자료형
	bool b_1 = true, b_2 = true, b_3 = true;
	int i_1 = 1, i_2 = 2, i_3 = 3;	// +- 약 22억
	long long lli_1 = 1, lli_2 = 2, lli_3 = 3;	// +- 922경, 10^19
	double d_1 = 1.23456789, d_2 = 2.2, d_3 = 3.3;	// 일반적인 실수는 double
	float f_1 = 1.1f, f_2 = 2.2f, f_3 = 3.3f;	// float은 뒤에 f 추가
	
	int num_array[3] = { 1, 2, 3 };

	// 반복문
	for (int i = 0; i < 3; i++)
	{
		printf("i : %d, int i = 0; i < 3; i++\n");
	}

	for (int i : num_array)	// c++11 for i in num_array : # python
	{
		printf("i : %d, int i : num_array\n");
	}

	int n;

	while (cin >> n) {
		cout << n << endl;
	}	// eof 반환시 종료

	// stdio.h
	printf("int : %d\nlong long : %lld\nfloat : %f\n, double : %f\n", i_1, lli_1, f_1, f_1, d_1);
	printf("%10d\n", i_1);	// 정수부분 10자리
	printf("%.10f\n", f_1);	// 소수부분 10자리
	printf("int형 입력 : ");
	scanf("%d", &i_1);

	// iostream
	ios::sync_with_stdio(false);
	cin.tie(0);	// 입력 속도 줄이기
	cout << "cout << " << endl;	// endl은 출력 버퍼 비우는 역할까지 함. 속도를 위해서는 \n 사용
	cin >> i_1;
	cin.ignore(); // 버퍼 비우기

	cout << showbase;	// 출력에 진법 표시 0, 0x 등
	cout << dec << "10진수(dec) : " << i_1 << endl;	// dec는 10진수, 기본값은 dec
	cout << oct;	// oct는 8진수. 넘어가도 값 유지
	cout << "8진수(oct) : " << i_1 << endl;
	cout << hex << "16진수(hex) : " << i_1 << endl;	// 16진수는 hex

	cout.precision(5);	// 자리수 지정, 정수부 포함
	cout << "정수부 동시 자리수 지정 : " << d_1 << endl;
	cout << fixed;	// 소수부 부분만 따로 지정하겠다는 의미
	cout << "소수부만 따로 지정 : " << d_1 << endl;

	// string
	string str = "hello world, c++";
	string newstr1 = str.substr(0, 5);
	string newstr2 = str.substr(6, 5);
	string newstr3 = str.substr(13, 3);
	
	// <string>
	int n;
	getline(cin, str);
	do {
		cin >> str;
	} while (getc(stdin) == ' ');	// 엔터를 사용하여 반복문 탈출
	while (cin >> str) {	// EOF(End Of File)이 등장하면 탈출
		cout << str << endl;
	}
	while (scanf("%d", &n) != EOF) { // EOF(End Of File)이 등장하면 탈출
		printf("%d \n", n);
	}
	// <iomanip>
	cout << setw(5) << i_1 << endl;	// setw(n) 일회성, n만큼 최소한의 자리 확보
	cout << setw(3) << 10 << ",";
	cout << setw(3) << 100 << ",";
	cout << setw(3) << 1000 << endl;

	cout << setfill('_');	// 빈 공간 대신 채울 글자 지정
	cout << setw(5) << i_1 << endl;
	cout << setfill(' ');	// 초기 설정은 공백
	cout << left << setw(5) << 100 << endl;	// 자리 확보 시 왼쪽 정렬
	cout << right << setw(5) << 100 << endl;	// 자리 확보 시 오른쪽 정렬(기본값)

	std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::fill(v.begin(), v.end(), -1);

	return 0;
}