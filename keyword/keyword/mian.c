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
//	//�ȶ�a��ʹ�ã������ӣ�����x��ֵ��10��֮��a���11��
//	int y = a--;
//	//�ȶ�a��ʹ�ã����Լ�������y��ֵ��11��֮��a���10��
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
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//������Ǽ�ʱ���ұ߲�����ʲô������ȥ����
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
//	pStu->age = 18;//�ṹ��Ա����
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//�ṹ��Ա����
//
//	stu.age = 20;//�ṹ��Ա����
//	set_age1(stu);
//
//	pStu->age = 20;//�ṹ��Ա����
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