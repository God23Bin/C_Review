#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// struct-结构体关键字 Stu-结构体标签  struct Stu-结构体类型

// 定义一个结构体类型
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}s1, s2, s3;	// s1,s2,s3是三个全局结构体变量
//
//int main() 
//{
//	// 创建结构体变量
//	struct Stu s;	// 局部变量
//
//	return 0;
//}

// typedef 类型重定义，说白了，改个名字
//typedef struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}Stu;	// 重新替换类型名，名为Stu
//
//int main() 
//{
//	// 创建结构体变量
//	//struct Stu s;	// 局部变量
//
//	//Stu s2;	// 就可以这样写了
//
//	// 结构体初始化
//	Stu s1 = { "LeBron", 36, "110-5454-45", "M" };
//
//
//	return 0;
//}


//栈区 
//- 局部变量
//- 函数的形式参数
//- 函数调用也开辟空间
//
//堆区
//- 动态内存分配
//- malloc/free
//- realloc
//- calloc
//
//静态区
//- 全局变量
//- 静态变量

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
//	// 成员变量
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}Stu;	// 重新替换类型名，名为Stu
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
//	// 打印结构体数据
//	Print(s);
//	Print1(&s);
//	// 打印函数传地址的好
//	// 因为传参时，参数是需要压栈的
//	// 如果你传结构体对象，这个结构体很大，参数压栈，系统开销比较大，会导致性能下降
//	return 0;
//}