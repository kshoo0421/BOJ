#include <bits/stdc++.h>
using namespace std;

int main()
{
	// �ڷ���
	bool b_1 = true, b_2 = true, b_3 = true;
	int i_1 = 1, i_2 = 2, i_3 = 3;	// +- �� 22��
	long long lli_1 = 1, lli_2 = 2, lli_3 = 3;	// +- 922��, 10^19
	double d_1 = 1.23456789, d_2 = 2.2, d_3 = 3.3;	// �Ϲ����� �Ǽ��� double
	float f_1 = 1.1f, f_2 = 2.2f, f_3 = 3.3f;	// float�� �ڿ� f �߰�
	
	int num_array[3] = { 1, 2, 3 };

	// �ݺ���
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
	}	// eof ��ȯ�� ����

	// stdio.h
	printf("int : %d\nlong long : %lld\nfloat : %f\n, double : %f\n", i_1, lli_1, f_1, f_1, d_1);
	printf("%10d\n", i_1);	// �����κ� 10�ڸ�
	printf("%.10f\n", f_1);	// �Ҽ��κ� 10�ڸ�
	printf("int�� �Է� : ");
	scanf("%d", &i_1);

	// iostream
	ios::sync_with_stdio(false);
	cin.tie(0);	// �Է� �ӵ� ���̱�
	cout << "cout << " << endl;	// endl�� ��� ���� ���� ���ұ��� ��. �ӵ��� ���ؼ��� \n ���
	cin >> i_1;
	cin.ignore(); // ���� ����

	cout << showbase;	// ��¿� ���� ǥ�� 0, 0x ��
	cout << dec << "10����(dec) : " << i_1 << endl;	// dec�� 10����, �⺻���� dec
	cout << oct;	// oct�� 8����. �Ѿ�� �� ����
	cout << "8����(oct) : " << i_1 << endl;
	cout << hex << "16����(hex) : " << i_1 << endl;	// 16������ hex

	cout.precision(5);	// �ڸ��� ����, ������ ����
	cout << "������ ���� �ڸ��� ���� : " << d_1 << endl;
	cout << fixed;	// �Ҽ��� �κи� ���� �����ϰڴٴ� �ǹ�
	cout << "�Ҽ��θ� ���� ���� : " << d_1 << endl;

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
	} while (getc(stdin) == ' ');	// ���͸� ����Ͽ� �ݺ��� Ż��
	while (cin >> str) {	// EOF(End Of File)�� �����ϸ� Ż��
		cout << str << endl;
	}
	while (scanf("%d", &n) != EOF) { // EOF(End Of File)�� �����ϸ� Ż��
		printf("%d \n", n);
	}
	// <iomanip>
	cout << setw(5) << i_1 << endl;	// setw(n) ��ȸ��, n��ŭ �ּ����� �ڸ� Ȯ��
	cout << setw(3) << 10 << ",";
	cout << setw(3) << 100 << ",";
	cout << setw(3) << 1000 << endl;

	cout << setfill('_');	// �� ���� ��� ä�� ���� ����
	cout << setw(5) << i_1 << endl;
	cout << setfill(' ');	// �ʱ� ������ ����
	cout << left << setw(5) << 100 << endl;	// �ڸ� Ȯ�� �� ���� ����
	cout << right << setw(5) << 100 << endl;	// �ڸ� Ȯ�� �� ������ ����(�⺻��)

	std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::fill(v.begin(), v.end(), -1);

	return 0;
}