#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL],int row ,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char judge(char board[ROW][COL], int row, int col);//�ж���Ӯ
//'*'���Ӯ
//'#'����Ӯ
//'Q'ƽ��
//'C'����
int IsFull(char board[ROW][COL], int row, int col);