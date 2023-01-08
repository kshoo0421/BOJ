#include <iostream>
int count;

void print_underbar(const int& cur_num)
{
	for (int i = 0; i < cur_num; i++)
		printf("____");
	return;
}

void reflective_print(const int& cur_num)
{
	print_underbar(cur_num);
	printf("\"����Լ��� ������?\"\n");
	if (cur_num == count)
	{
		print_underbar(cur_num);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	}
	else
	{
		print_underbar(cur_num);
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		print_underbar(cur_num);
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		print_underbar(cur_num);
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		reflective_print(cur_num + 1);
	}
	print_underbar(cur_num);
	printf("��� �亯�Ͽ���.\n");
	return;
}

int main()
{
	scanf("%d", &count);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	reflective_print(0);
	return 0;
}