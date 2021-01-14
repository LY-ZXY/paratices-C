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
	//定义一个数组，去存放玩家和电脑走出的信息哈。
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	/*打印棋盘哈*/
	DisplayBoard(board,ROW,COL);
	/*玩家下棋*/
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = Iswin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}

	/*电脑下棋*/
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*判断电脑是否赢了*/
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");
	}
	else 
	{
		printf("平局");
	}
	
}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出");
			break;
		default:
			printf("选择错误请重新选择");
			break;
		}
	} while (input);
}
int main()
{

	 text();
	 
	return 0;
}