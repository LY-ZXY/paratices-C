#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*取模%操作时两边都得时整型*/
//	double a = 5.0 / 2;
//	printf("%lf\n",a);
//	/*打印出来的浮点数是0*/
//	printf("%d\n", a);
//	return 0;
//}

/*移位操作符*/

/*有意操作符有：
1.算数右移
右边丢弃，左边补原符号位
*/

/*对于左移操作符
一般都是左边丢弃，右边要补零哈。
注意：向左移位一般都有乘以2的效果哈
*/
//int main()
//{
//	int a = -1;
//	//右移操作符
//	//00000000  00000000  00000000  00000000
//	/*有意操作符有：
//	1.算数右移
//	右边丢弃，左边补原符号位
//	2.逻辑右移
//	右边丢弃左边补零	
//	*/
//
//	int b= a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

/*位操作符哈

与 &、或|、异或 ^
注意：异或 ^是相同为0，相异为1的哈；
都是二进制的补码
全部都要是整数才行
*/
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	num1&num2;
//	num1|num2;
//	num1^num2;
//	printf("%d\n%d\n",num1 ,num2);
//	return 0;
//}

int main()
{
	int a = 0;
	int s = 5;
	printf("%d",sizeof(s=a+5));
	printf("%d", sizeof(s));
	return 0;
}