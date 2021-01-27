#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	{
		int tmp = 0;
		printf("tmp = %d\n",tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 1; i++)
	{
		arr[i] = i;
	}
	return 0;
}