#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// struct-�ṹ��ؼ��� Stu-�ṹ���ǩ  struct Stu-�ṹ������

// ����һ���ṹ������
//struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}s1, s2, s3;	// s1,s2,s3������ȫ�ֽṹ�����
//
//int main() 
//{
//	// �����ṹ�����
//	struct Stu s;	// �ֲ�����
//
//	return 0;
//}

// typedef �����ض��壬˵���ˣ��ĸ�����
//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}Stu;	// �����滻����������ΪStu
//
//int main() 
//{
//	// �����ṹ�����
//	//struct Stu s;	// �ֲ�����
//
//	//Stu s2;	// �Ϳ�������д��
//
//	// �ṹ���ʼ��
//	Stu s1 = { "LeBron", 36, "110-5454-45", "M" };
//
//
//	return 0;
//}


//ջ�� 
//- �ֲ�����
//- ��������ʽ����
//- ��������Ҳ���ٿռ�
//
//����
//- ��̬�ڴ����
//- malloc/free
//- realloc
//- calloc
//
//��̬��
//- ȫ�ֱ���
//- ��̬����

//struct S 
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T 
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main() 
//{
//	char arr[] = "hello\n";
//	struct T t = { "hehe", {100, 'w', "hello world", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}Stu;	// �����滻����������ΪStu
//
//void Print(Stu tmp) 
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("phone: %s\n", tmp.phone);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void Print1(Stu* ps) 
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("phone: %s\n", ps->phone);
//	printf("sex: %s\n", ps->sex);
//}
//
//int main() 
//{
//	Stu s = { "Lebron",35,"15598886688", "M" };
//	// ��ӡ�ṹ������
//	Print(s);
//	Print1(&s);
//	// ��ӡ��������ַ�ĺ�
//	// ��Ϊ����ʱ����������Ҫѹջ��
//	// ����㴫�ṹ���������ṹ��ܴ󣬲���ѹջ��ϵͳ�����Ƚϴ󣬻ᵼ�������½�
//	return 0;
//}