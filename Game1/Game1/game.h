#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

// 函数的声明，实现就写在.c文件中
void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

// 告诉我们四种游戏状态
// 玩家赢了				- '*'
// 电脑赢了				- '#'
// 平局了，都没赢		- 'Q'
// 没赢没平局，继续		- 'C'
char IsWin(char board[ROW][COL], int row, int col);