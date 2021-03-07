#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 指针进阶

// 不能再怕指针

//1. 字符指针
//2. 指针数组
//3. 数组指针
//4. 数组传参和指针传参
//5. 函数指针
//6. 函数指针数组
//7. 指向函数指针数组的指针
//8. 回调函数
//9. 指针和数组面试题的解析

// 回顾
// 指针就是个变量，用来存放地址，地址唯一标识一块内存空间
// 指针的大小是固定的4/8个字节（32位平台/64位平台）
// 指针有类型，指针类型决定了指针加减整数的步长，还有解引用操作时的权限
// 指针的运算


//1. 字符指针

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main() 
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}


//int main() 
//{
//
//	char* p = "abcdef"; // "abcdef" 是一个常量字符串，这里把字符串的首元素地址赋值到p上去了，也是可以的
//	printf("%s\n", p);
//
//	return 0;
//}


//int main() 
//{
//	char* p = "abcdef"; // "abcdef" 是一个常量字符串，这里把字符串的首元素地址赋值到p上去了，也是可以的
//	// 下面这种行为是错误的
//	*p = 'W';
//	printf("%s\n", p);
//	// Segmentation fault - 段错误
//	// 就是内存访问错误
//	// segmentfault.com
//	return 0;
//}

//int main() 
//{
//	const char* p = "abcdef"; // 准确写法，加上const
//	// 下面这种行为是错误的
//	*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}


// 面试题 - 来自剑指offer

// 输出什么？
//int main() 
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (arr1 == arr2) // 如果条件是 p1 == p2 呢？
//	{
//		printf("盒盒盒\n");
//	}
//	else 
//	{
//		printf("哈哈哈\n");
//	}
//
//	return 0;
//}


//2. 指针数组
// 就是数组

//int main() 
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4]; // 存放整型指针的数组 - 指针数组
//	char* pch[5]; // 存放字符指针的数组 - 指针数组
//	return 0;
//}

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++) 
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

// 正确情况如何用指针数组？什么使用用它？

//int main() 
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++) 
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//3. 数组指针

//int main() 
//{
//	//int* p = NULL;// 整型指针 - 指向整型的指针 - 可以存放整型的地址
//	//char* pc = NULL;// 字符指针 - 指向字符的指针 - 可以存放字符的地址
//	// 数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = { 0 };
//	// arr - 首元素地址
//	// &arr[0] - 首元素地址
//	// &arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;// 数组地址存起来
//	// 上面的p就是 数组指针
//	return 0;
//}

//int main() 
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	return 0;
//
//}

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}*/
//	return 0;
//}

// 数组指针一般用到二维数组那边才方便使用

//// 参数是数组的形式
//void print1(int arr[3][5], int x, int y) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) 
//	{
//		for (j = 0; j < y; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//// 放数组指针
//// 参数是指针的形式
//void print2(int(*p)[5], int x, int y) 
//{
//	int i = 0;
//	for (i = 0; i < x; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < y; j++) 
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//		
//	}
//}
//
//void look() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *p + i);
//		printf("%d ", *arr + i);
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() 
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);	// arr - 数组名 - 首元素地址
//	print2(arr, 3, 5);	// arr - arr[0][]的地址
//
//	look();
//	return 0;
//}

//int arr[5];
//int* parr1[10];// parr1是一个数组，数组有10个元素，每个元素的类型是int*，所以parr1是指针数组
//int(*parr2)[10];// parr2是一个指针，该指针指向了一个数组，数组10个元素，每个元素的类型是int，parr2是数组指针
//int(*parr3[10])[5];// parr3是一个数组，有5个元素，每个元素是一个数组指针，该数组指针指向的有5个元素，每个元素是int
