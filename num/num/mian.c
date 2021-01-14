#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"


void menu()
{
	printf("******************\n");
	printf("***1.paly   0.exit\n");
	printf("******************\n");
}

void game()
{
	char ret=0;
	//����һ�����飬ȥ�����Һ͵����߳�����Ϣ����
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	/*��ӡ���̹�*/
	DisplayBoard(board,ROW,COL);
	/*�������*/
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = Iswin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}

	/*��������*/
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*�жϵ����Ƿ�Ӯ��*/
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");
	}
	else 
	{
		printf("ƽ��");
	}
	
}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}
int main()
{

	 text();
	 
	return 0;
}