#include <iostream>
using namespace std;

int main()
{
	int a;
	bool list[31];
	for (int i = 0; i < 30; i++)	// �ʱ�ȭ
		list[i] = false;
	
	for (int i = 0; i < 28; i++)	// �Է�
	{
		cin >> a;
		if (list[a-1] == true)
		{
			cout << "�ߺ� ����";
			break;
		}
		list[a-1] = true;	// ���� �Ϸ�
	}

	for (int i = 0; i < 30; i++)	// Ȯ��
		if (list[i] == false)	// �ȳ�����
			cout << i+1 << endl;	// ���
	return 0;
}