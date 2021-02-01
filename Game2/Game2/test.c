#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("-------------------------------\n");
	printf("--------    1. play    --------\n");
	printf("--------    0. exit    --------\n");
	printf("-------------------------------\n");
}

// 1. 布置雷
// 2. 排查雷
void game()
{
	// 雷的信息存储的格子 - 数组
	char mine[ROWS][COLS] = { 0 }; // 11 * 11
	// 排查出来的雷的信息 - 数组 - 扩大一圈，防止越界
	char show[ROWS][COLS] = { 0 };
	// 初始化，雷的信息一开始放字符0，排查的一开始放字符*
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// 打印棋盘，最外一圈不打印，打印9 * 9
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	// 布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	// 排查雷
	FineMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));	// srand()不能频繁调用，调用一次就够了，所以还是写在这里进行调用
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择哦~\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}