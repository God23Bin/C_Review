#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// 打印列号
	printf("  ");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

// 设置坐标为字符1，代表雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;	//1-9 ,模9，余数0到8，那么+1就成1到9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

// '0' - '0' = 0
// '1' - '0' = 1
// '3' - '0' = 3

// 先减去字符0，即可得到相对应的数字，由ASCII可知
// 先转成数字然后相加，就知道有几个雷了

//[x - 1, y - 1]	[x - 1, y]	[x - 1, y + 1]
//[  x  , y - 1]	[  x,  y ]	[  x  , y + 1]
//[x + 1, y - 1]	[x + 1, y]	[x + 1, y + 1]

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int a, b, c, d, e, f, g, h;
	a = mine[x - 1][y - 1] - '0';
	b = mine[x - 1][y] - '0';
	c = mine[x - 1][y + 1] - '0';
	d = mine[x][y - 1] - '0';
	e = mine[x - 1][y + 1] - '0';
	f = mine[x + 1][y - 1] - '0';
	g = mine[x + 1][y] - '0';
	h = mine[x + 1][y + 1] - '0';

	return a + b + c + d + e + f + g + h;
	//return 5;
}

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	// 9 * 9 - 10 = 71 个位置
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		// 判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			// 合法
			// 1. 踩雷了
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else // 2. 不是雷，计算x,y坐标周围8个信息，看有几个雷
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入的坐标超出范围咯，请重新输入~\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		DisplayBoard(mine, row, col);
	}

}