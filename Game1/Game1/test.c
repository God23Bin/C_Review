#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("-----------------------------------\n");
	printf("------1.play          0.exit-------\n");
	printf("-----------------------------------\n");
}

// ��Ϸ������ʵ��
void game()
{
	char res = 0;
	// ����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };	// ȫ���ո�
	// ��ʼ������
	InitBoard(board, ROW, COL);
	// ��ӡ����
	DisplayBoard(board, ROW, COL);
	// ����
	while (1)
	{
		// ������� - ��������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �ж�����Ƿ�Ӯ
		res = IsWin(board, ROW, COL);
		if (res != 'C')
		{
			break;
		}
		// ��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �жϵ����Ƿ�Ӯ
		res = IsWin(board, ROW, COL);
		if (res != 'C')
		{
			break;
		}
	}
	if (res == '*')
	{
		printf("���Ӯ\n");
	}
	else if (res == '#')
	{
		printf("����Ӯ\n");
	}
	else if (res == 'Q')
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	// ����������� - srand
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
}