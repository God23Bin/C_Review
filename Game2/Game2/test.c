#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("-------------------------------\n");
	printf("--------    1. play    --------\n");
	printf("--------    0. exit    --------\n");
	printf("-------------------------------\n");
}

// 1. ������
// 2. �Ų���
void game()
{
	// �׵���Ϣ�洢�ĸ��� - ����
	char mine[ROWS][COLS] = { 0 }; // 11 * 11
	// �Ų�������׵���Ϣ - ���� - ����һȦ����ֹԽ��
	char show[ROWS][COLS] = { 0 };
	// ��ʼ�����׵���Ϣһ��ʼ���ַ�0���Ų��һ��ʼ���ַ�*
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// ��ӡ���̣�����һȦ����ӡ����ӡ9 * 9
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	// ������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	// �Ų���
	FineMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));	// srand()����Ƶ�����ã�����һ�ξ͹��ˣ����Ի���д��������е���
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��Ŷ~\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}