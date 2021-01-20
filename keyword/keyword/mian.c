#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("a=%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int x = a++;
//	printf("a=%d\n", a);
//	//先对a先使用，再增加，这样x的值是10；之后a变成11；
//	int y = a--;
//	//先对a先使用，再自减，这样y的值是11；之后a变成10；
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = a&&b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ &&++b &&d++;
//	i = a++ || b++ || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//当左边是假时，右边不管是什么都不再去算了
//	printf("i=%d\n",i);
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("b=%d",b);
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu) {
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu) {
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	return 0;
//}
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	return 0;
}