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


// 回顾

//int main() 
//{
//	// 字符指针
//	char ch = '2';
//	char* pc = &ch;
//	const char* pc2 = "abcdefg";
//
//	// 指针数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//	// 数组指针 - 指向数组的指针
//	int arr2[5];
//	//int* pa[5] = &arr2; // 这样pa就和[]组合，成数组了
//	int(*pa)[5] = &arr2; // 这样pa和*组合，pa就是数组指针
//	// 指针类型就是int(*)[5]
//
//	int(*parr3[10])[5];
//	
//	return 0;
//}

// 数组传参 传数组名，传指针，都没问题
//
//void test(int arr[]) 
//{
//	// ok?
//}
//
//void test1(int arr[10]) 
//{
//	// ok?
//}
//
//void test2(int* arr) 
//{
//	// ok?
//}
//// 上面基本ok，可以写
//
//void test3(int* arr[20]) 
//{
//	// ok?
//}
//
//void test4(int** arr) 
//{
//	// ok?
//}
//
//int main() 
//{
//	int arr[3][5] = { 0 };
//	return 0;
//}

//void test(int arr[3][5])
//{
//	
//}
//
//// 行是可以不用写的，可以省略掉
//void test(int arr[][5])
//{
//	
//}
//
//void test1(int(*arr)[5]) 
//{
//
//}
//
//int main() 
//{
//	int arr[3][5] = { 0 };
//	test(arr);	// 二维数组传参
//	// 二维数组 讨论其数组名的时候
//	// 就数组名是首元素地址
//	// 对于二维数组，就是第一行的地址
//	test1(arr);
//	return 0;
//}

// 指针传参
//
//void print(int* p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

// 思考
// 当一个函数的参数部分为一级指针的时候，函数能接收什么参数？

// 比如
//void test1(int* p) 
//{
//	// test1 函数能接收什么参数？
//}
//
//void test2(char* p) 
//{
//	// test2 函数能接收什么参数？
//}
//
//int main() 
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);	// ok
//	test1(p1);	// ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);	// ok
//	test2(pc);	// ok
//
//	return 0;
//}


// 二级指针传参

//void test(int** ptr) 
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main() 
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(int** p) // 说明可以传指针数组
//{
//	
//}
//
//int main() 
//{
//	int* ptr;
//	int** pp = &ptr;
//
//	test(&ptr);
//	test(pp);
//
//	// 传一个数组，说明二级指针参数可以接收指针数组
//	int* arr[10];
//	test(arr);
//	return 0;
//}

// 数组指针 - 指向数组的指针

// 函数指针 - 说明是指向函数的指针

// 补充：C语言中，函数和类名采用开头大写字母的方式命名
//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//
//	// &函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}


//void Print(char* str) 
//{
//	printf("%s\n", str);
//}
//
//int main() 
//{
//	void (*p)(char*) = Print;
//	(*p)("LeBron Jeams");
//	return 0;
//}

// 两段有趣代码

//(*(void(*)())0)();
//(*(   void(*)()   )0)();	// 把0强制类型转换，变成函数指针类型
//(   *(void(*)())0  )();	// 然后进行解引用

//void (*signal(int, void(*)(int)))(int);
//      *signal(  int, void(*)(int)  ) -  signal函数名，两个参数 - 
//void (   *signal(int, void(*)(int))   )(int);

// 《C陷阱与缺陷》

// 复杂 - 进行简化

// 因为以前嘛，就 typedef unsigned int uint;
// 所以现在
// 想的时候是这样写：typedef void(*)(int) pflun_t; 但是写不了
// 只能像下面这样写
//typedef void(*pflun_t)(int);
//pflun_t signal(int, pflun_t);

// signal 是一个函数声明
// signal 函数的参数有两个
// 第一个是int类型，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
// signal 函数的返回类型，也是一个函数指针，该函数指针指向的函数参数int，返回类型void

//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));	// 5
//	printf("%d\n", (**pa)(2, 3));	// 5
//	printf("%d\n", (***pa)(2, 3));	// 5
//	// * 是什么意思呢？ 输出都一样
//	// 说明*放在这里是没什么用的，完全就是摆设
//	printf("%d\n", (pa)(2, 3));	// 5
//	// 如果pa是函数指针，我们可以解引用调用它
//	// 当然，还可以直接使用，不需要解引用
//	// Add传给了pa，说明pa就是Add，当然可以直接pa调用
//	// 当然，*也是有意义的，就是解引用来调用函数
//	// 你想怎样用就怎样用
//	return 0;
//}


// 函数指针数组

//int Add(int x, int y) 
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main() 
//{
//	// 指针数组
//	int* arr[5];
//	int (*pa)(int, int) = Add;	//Sub/Mul/Div，这几个函数地址都能存
//	// 这时，就需要一个数组，这个数组可以存放4个函数地址，这就是函数指针的数组
//	// 函数指针数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };// 函数指针的数组，每个元素都是一个函数指针
//	int i = 0;
//	for (i = 0; i < 4; i++) 
//	{
//		printf("%d\n", parr[i](2, 3));// 5 -1 6   2除3，商0余2 0
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
// 写一个函数指针pf，能够指向my_strcpy
// 写一个函数指针数组，能够存放my_strcpy函数的地址