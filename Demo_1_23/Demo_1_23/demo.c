#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int result = add(a, b);
//	printf("%d\n", result);
//	return 0;
//}

//int main() 
//{
//	// strcpy - string copy
//	// strlen - string length
//
//	char arr1[] = "Guangzhou";
//	char arr2[] = "#################";
//	strcpy(arr2, arr1);
//	printf("arr2 = %s\n", arr2);
//	return 0;
//}

//int main()
//{
//	// memset - memory set 内存 设置
//
//	char arr[] = "Hello World!";
//	// 把前五个设置为 * 
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


// 自定义函数


// 写一个函数，找出两个数的较大值

//int get_max(int x, int y) 
//{
//	if (x > y) 
//	{
//		return x;
//	}
//	else 
//	{
//		return y;
//	}
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


// 写一个函数交换两个整型的内容

//void swap(int* x, int* y)	// 指针变量，存储变量的地址，也就是说参数需要传地址
//{
//	int temp = 0;
//	temp = *x;	// 解引用操作，通过地址找到对应的变量；间接访问
//	*x = *y;
//	*y = temp;
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

// 形参 - 只有函数被调用的过程中才会实例化，不然不会存在，所以被称为形式上的参数
// 实参 - 
// 可以简单的认为，形参实例化后相当于实参的一份临时拷贝，修改形参不会影响到实参


// 函数的调用

// 传值调用 - 值传递
// 传址调用 - 地址传递

// 练习
// 可判断一个数是不是素数的函数
// 可判断某年是不是闰年的函数
// 实现整型有序数组的二分查找函数
// 一个函数，每调用一次该函数，就将num值增加1


// 1. 可判断一个数是不是素数的函数
//int is_sushu(int num) 
//{
//	for (int i = 2; i < num; i++) 
//	{
//		if (num % i == 0) // 如果有一个数能被num整除，不是素数 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

// 优化
//int is_sushu(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0) // 如果有一个数能被num整除，不是素数 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() 
//{
//	// 打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		if ((is_sushu(i))) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 2. 可判断某年是不是闰年的函数

//int is_leap_year(int y) 
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//int main() 
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) 
//	{
//		// 判断year是否为闰年
//		if (is_leap_year(year)) 
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


// 3. 实现整型有序数组的二分查找函数

//int binary_search(int arr[], int k, int len) // 传过来的是数组的首元素的地址，什么来接收？指针，即这里写的表面上是数组，实际上是一个指针
//{
//	// 二分查找的实现
//	//int len = sizeof(arr) / sizeof(arr[0]); // 这里sizeof(arr)求的是指针的大小
//	int left = 0;
//	int right = len - 1;
//	
//
//	while (left <= right)	// 这里注意是 <=，没有等号的话，就进不来，找不到要找的元素
//	{
//		int mid = (left + right) / 2;	// 这里别犯了之前的错，放到了while外面，必须放里面，每次都进行求解mid
//		if (k > arr[mid])	// 如果 k > mid，即在mid的右边，那么left就变成mid + 1 
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;	// 找到返回该下标
//		}
//	}
//	if (left > right)	// 左边下标大于右边，说明找不到
//	{
//		return -1;
//	}
//}
//
//int main() 
//{
//	// 二分查找
//	// 在一个有序数组中查找具体的某个数，一定是有序的数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int result = binary_search(arr, k, len);	//传过去的是arr首元素的地址
//	if (result == -1) 
//	{
//		printf("找不到指定的数字\n");
//	}
//	else 
//	{
//		printf("找到了，下标是：%d\n", result);
//	}
//	return 0;
//}

// 4. 一个函数，每调用一次该函数，就将num值增加1

//void make_change(int* p) 
//{
//	//*p++;	// 这样写不行，++优先级比较高，直接作用与p++，不是*p++
//	(*p)++;
//}
//
//int main() 
//{
//	int num = 0;
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	return 0;
//}


// 函数的嵌套调用和链式访问
// 嵌套调用，你调我，我调你，有机组合
// 链式访问，把一个函数的返回值作为另一个函数的参数

//int main() 
//{
//	int len = strlen("abc");
//	// 1
//	printf("%d\n", len);
//	// 2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main() 
//{
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//
//	return 0;
//}

// 函数的声明和定义

// 程序从上往下执行，需要先声明有这么一个函数，不然会找不到，除非你函数定义在最上面

//int add(int x, int y);	// 进行函数声明
//
//int main() 
//{
//	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int add(int x, int y)	// 进行函数定义
//{
//	return x + y;
//}

// 然后实际上，函数的声明和定义不是这样用的，就这里而言，把add()函数的定义放到add.c中，函数的声明放到头文件add.h中
// 然后这里引入这个头文件，进而使用函数
// 为什么要这样？ 解耦，功能独立

//#include "add.h"	// 自己写的头文件就用""来引用
//
//int main() 
//{
//	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


// 函数递归
// 递归的思考，什么是递归？可以说，递归是一种函数直接或间接调用自身的一种方法。
// 通常把一个大型复杂的问题转化为一个与原问题相似的规模较小的问题来进行求解，使用少量程序代码就能描述出解题过程所需要的多次重复计算
// 说白了，递归就是调自己，大事化小

// 递归的两个必要条件
// 1. 存在限制条件，当满足限制条件的时候，递归便不再继续进行
// 2. 每次递归调用后，会越来越接近这个限制条件


// 每一次函数调用都会在栈区申请空间，申请满了的话就会出现栈溢出 stack overflow

// 内存区域
// 栈区
//		局部变量
//		函数形参
// 堆区
//		动态开辟的内存，比如malloc(), calloc()
// 静态区
//		全局变量
//		static修饰的变量


// 练习
// 接收一个整型值（无符号），按照顺序打印它的每一位。例如：输入1234，就会输出 1 2 3 4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);	// 1234
//	int last_position = 0;
//	//1234 % 10; // 4
//	//1234 /10 = 123 % 10; // 3
//	//123 /10 = 12 % 10; // 2
//	// 递归
//	print(input);
//	//print(1234);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}


// 编写函数不允许创建临时变量，求字符串的长度

// 模拟实现一个strlen()函数
//int my_strlen(char* str) // 字符指针变量，传进来的 arr 就存放字符数组首元素的地址
//{
//	// 临时变量 count
//	int count = 0;
//	// 通过移动指针，判断是否为/0
//	while (*str != '\0') 
//	{
//		count++;
//		str++;	// 使指针往后走
//	}
//	return count;
//}

// 不创建临时变量来实现 - > 递归的方法

// my_strlen("nba")
// 1 + my_strlen("ba")
// 1 + 1 + my_strlen("a")
// 1 + 1 + 1 + my_strlen("")
// 1 + 1 + 1 + 0

//int my_strlen(char* str) // 字符指针变量，传进来的 arr 就存放字符数组首元素的地址
//{
//	if (*str != '\0') 
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//
//int main() 
//{
//	char arr[] = "nba";			// n b a \0
//	//int len = strlen(arr);	// 求字符串长度
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);	// arr是数组，数组传参，传过去的是数组首元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}


// 求 n 的阶乘（不考虑溢出）

// 循环
//int factorial(int n) 
//{
//	int i = 0;
//	int res = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		res *= i;
//	}
//	return res;
//}


// 递归的方式
// 5 * factorial(4)
// 5 * 4 * factorial(3)
// 5 * 4 * 3 * factorial(2)
// 5 * 4 * 3 * 2 * factorial(1)
//int factorial(int n)
//{
//	if (n == 1) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main() 
//{
//	int n = 0;
//	int res = 0;
//	//1 * 2 * 3
//	scanf("%d", &n);
//	res = factorial(n);
//	printf("%d\n", res);
//	// 综上
//	// 循环 -》递归
//	// 递归 -》循环
//	return 0;
//}


// 求第 n 个斐波那契数

// 斐波那契数列 1 1 2 3 5 8 13 21 34 55

//int count = 0; // 看看3被重复计算了多少次
//int fib(int n) 
//{
//	//if (n == 3) // 看看3被重复计算了多少次
//	//{
//	//	count++;
//	//}
//	if (n <= 2) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

// 50
// 49 48
// 48 47	47 46
// 47 46	46 45	46 45	45 44
// 使用递归，很多重复的计算，不是很好的解决这个问题的算法

// 使用迭代

//int fib(int n) 
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() 
//{
//	int n = 0;
//	int res = 0;
//	scanf("%d", &n);
//	// TDD - 测试驱动开发
//	res = fib(n);
//	printf("res = %d\n", res);
//	//printf("count = %d\n", count);
//
//	// 打印斐波那契数列
//	for (int i = 1; i <= n; i++) 
//	{
//		printf("%d ", fib(i));
//	}
//	return 0;
//}


// 汉诺塔问题
// 青蛙跳台阶问题

//int main() 
//{
//	return 0;
//}

