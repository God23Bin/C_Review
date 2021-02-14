#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 指针是什么

// 指针和指针类型

// 野指针

// 指针运算

// 指针和数组

// 二级指针

// 指针数组


// 内存

// 内存编号？-内存地址怎样产生？
// 电线-电信号-


// 内存划分的大小？-一个内存单元的划分大小，一个字节

//int main() 
//{
//	int a = 10;
//	int* p = &a;	// 指针变量，存地址，称指针，指针=地址，有点绕
//	
//	return 0;
//}

// 指针和指针类型

// 指针类型的意义

//int main() 
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	// 大小都是4个字节/8个字节，为什么还要分类型？
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	// 发现打印的地址一样
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	// 类型带来的区别
//	// 当解引用的时候，不一样，整型的一改变就会改变4个字节
//	// 如果是char类型，那么就会改变1个字节
//
//	// 总的来说，指针类型决定了指针进行解引用操作的时候，能够访问内存空间的大小
//	// int* p; *p 能够访问4个字节
//	// char* p; *p 能够访问1个字节
//	// doubel* p; *p 能够访问8个字节
//	// 
//
//	return 0;
//}


//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	//0093FADC
//	//0093FAE0
//	// 移动了4个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	//0093FADC
//	//0093FADD
//	// 移动了1个字节
//
//	// 指针类型决定了：指针走一步走多远（指针的不长）
//	// int*p; p + 1 --走4字节
//	// char*p; p + 1 --走1字节
//	// double*p; p + 1 --走8字节
//	return 0;
//}

// 综上，指针类型有两个意义的


//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = arr; // 数组名 - 存放着数组第一个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		*(p + i) = 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 野指针 就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）

// 导致野指针的原因
// 指针未初始化

//int main() 
//{
//	int a;// 局部变量不初始化，默认是随机值
//	int* p;// 局部指针变量，就被初始化默认随机值
//	return 0;
//}


// 指针越界访问，也会导致野指针
//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) 
//	{
//		*(p++) = i;
//	}
//	return 0;
//}

// 指针指向的 内存空间 释放

//int* test() 
//{
//	int a = 10;
//	return &a;
//}
//
//
//int main() 
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//int main() 
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	// NULL 不用它的使用，就置成空指针
//	p = NULL;
//	// 未来要用的话，就判断下
//	if (p != NULL) 
//	{
//		*p = 30;
//	}
//	return 0;
//}


// 指针运算

// 指针 加减 整数
// 指针 减去 指针
// 指针关系运算

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++) 
//	{
//		//printf("%d ", *p);
//		//p++;
//		printf("%d ", *p++);
//	}
//	return 0;
//}


//int main() 
//{
//	int values[5];
//	int* vp;
//	// 指针 加减 整数
//	for (vp = &values[0]; vp < &values[5];) 
//	{
//		*vp++ = 0;
//	}
//	//for (vp = &values[0]; vp < &values[5];)
//	//{
//	//	printf("%d ", *vp);
//	//}
//	return 0;
//}


//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]); // 指针减指针，得出它们之间的元素个数
//	return 0;
//}


//int my_strlen(char* str) 
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') 
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main() 
//{
//	// strlen - 求字符串长度
//	// 递归 - 模拟实现了strlen - 计数器的方式1，递归的方式2
//
//	// my_strlen();
//
//	char arr[] = "nba";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// 指针 关系 运算

//int main() 
//{
//	int values[5];
//	int* vp;
//
//	for (vp = &values[5]; vp > &values[0];) 
//	{
//		*--vp = 0;
//	}
//	return 0;
//}


//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//
//	// 1. &arr - &数组名的时候，数组名不是首元素地址 - &数组名，取出的是整个数组的地址
//	// 2. sizeof(arr) - sizeof(数组名) - 数组名是整个数组的大小
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


// 二级指针
//int main() 
//{
//	int a = 19;
//	int* pa = &a;
//	int** p_pa = &pa; // p_pa就是二级指针
//	//int*** p_p__pa = &p_pa; // p_p__pa就是三级地址
//	**p_pa = 20;
//	printf("%d\n", **p_pa);
//	return 0;
//}

// 指针数组 - 存放指针的数组

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	int* arr[] = { pa, pb, pc };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}


	return 0;
}