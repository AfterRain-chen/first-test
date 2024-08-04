#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0, j = 0 ;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			//��ӡһ�е����ݣ�
		{
				printf(" %c ", board[i][j]);
				if (j < col - 1)
				printf("|");
		}
				printf("\n"); 

		if (i < row -1)//���Ʋ�Ҫ��ӡ���һ�еķָ���
		

		{
			for (j = 0; j < col; j++)//��ʼ��ӡ�ָ���
			{
				printf("---");
				if (j < col - 1)
				printf("|");
			}
				printf("\n");
		}
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("����� >\n");
	while (1)
	{
		printf("������Ҫ�µĺ����꣺");
		scanf("%d", &x);
		printf("������Ҫ�µ������꣺");
		scanf("%d", &y );
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ��");
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}
}


char judge(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i ++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return board[i][1];
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	for (i = 0; i < col; i++)
	{

		if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
			return board[0][0];

		if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
			return board[2][2];
	}
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}

	return 'C';
}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < ROW;i ++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 0;

		}
	}

	return 1;

}