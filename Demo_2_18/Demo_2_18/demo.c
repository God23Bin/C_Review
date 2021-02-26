#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main() 
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) 
//	{
//		printf("I love you\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

// 死循环
// 1.栈区默认使用：
//		先使用高地址处的空间，再使用低地址处的空间
// 2.数组随着下标的增长，地址由低到高变化

// 在VS中，内存布局就是这样，i先定义了，然后就会在栈区高地址处存储i
// arr就会与i相差两个地址

// 在VC6.0中，i <= 10就会死循环
// 在gcc中，i <= 11就会死循环


//void my_strcpy(char* dest, char* src) 
//{
//	while (*src != '\0') 
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	// 赋值最后的斜杠0过去
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest, const char* src)	// const 防止目的地址赋值到源地址，说白了防止你自己代码写错
//{
//	// 断言
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//
//int main() 
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "##############";
//	char arr2[] = "nba";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main() 
//{
//	const int num = 10;
//
//	//int* p = &num;
//	//*p = 20;
//	
//	//const int* p = &num;
//	//*p = 20;
//
//	// const 放在指针变量的 * 的左边时，即const int* p，修饰的是*p，也就是说：不能通过p改变*p
//	// const 放在指针变量的 * 的右边时，即int* const p修饰的是p，也就是说：指针变量本身，不能被改变了。
//
//
//	printf("%d\n", num);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)	// const 防止目的地址赋值到源地址，说白了防止你自己代码写错
//{
//	char* res = dest;
//	// 断言
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	return res;
//}
//
//int main() 
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "##############";
//	char arr2[] = "nba";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int my_strlen(const char* str) 
//{
//	int count = 0;
//	// 保证指针有效性
//	assert(str != NULL);
//	while (*str != '\0') 
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() 
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

