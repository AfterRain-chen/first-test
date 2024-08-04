#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#include "game.h"
void menu()
{
	printf(" 1.play    0.exit\n");
}


void game ()
{
	//����--- �������
	char board[ROW][COL] = { 'a' };
	char ret = 0;
	//��ʼ��ȫ���ո�
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board,ROW,COL);

	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW, COL);
		DisplayBoard(board,ROW,COL);
		ret = judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		judge(board, ROW, COL);
		ret = judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("��ѡ�� ��");
				menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);

}


int main()
{

	test();

	return 0;
}
