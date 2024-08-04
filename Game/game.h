#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL],int row ,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char judge(char board[ROW][COL], int row, int col);//判断输赢
//'*'玩家赢
//'#'电脑赢
//'Q'平局
//'C'继续
int IsFull(char board[ROW][COL], int row, int col);