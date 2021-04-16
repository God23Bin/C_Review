#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 使用计数器
//int my_strlen(char* str) 
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0') // while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// 使用递归

// 

//int main() 
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len1 = strlen(arr);
//	//printf("%d\n", len1);
//	// 
//	// my_strlen()的实现
//	// 1. 计数器的方法
//	// 2. 递归
//	// 3. 指针 - 指针
//
//	int len = strlen("abcdef");
//
//	// 下面输出什么？strlen()返回无符号整型
//	if (strlen("abc") - strlen("abcdef") > 0) 
//	{
//		printf("盒盒\n");
//	}
//	else 
//	{
//		printf("哈哈\n");
//	}
//
//	return 0;
//}

////char* my_strcpy(char* dest, char* src) 
//char* my_strcpy(char* dest, const char* src) 
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//while (*src != '\0') 
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;	// '\0'
//
//	// 优化1
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;	// '\0'
//
//	// 优化2
//	// 拷贝src指向的字符串到dest指向的空间，包含'\0'
//	char* rest = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// 返回目的空间的起始地址
//	return rest;
//}
//
//int main() 
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	// 把arr2的内容拷贝到arr1中
//	//strcpy(arr1, arr2);
//	// 怎么拷贝？
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//
//char* my_strcat(char* dest, const char* src) 
//{
//	char* rest = dest;
//	assert(dest != NULL);
//	assert(src);
//
//	// 1. 找到目的字符串的'\0'
//	while (*dest != '\0') 
//	{
//		dest++;
//	}
//	// 2. 追加
//	while (*dest++ = *src++) 
//	{
//		;
//	}
//	return rest;
//}
//
//int main() 
//{
//	//char arr1[] = "hello";
//	//char arr2[] = "world";
//
//	//// 把arr2追加到arr1上
//	//strcat(arr1, arr2);
//	//printf("%s\n", arr1);
//	// 会报错，空间不够，上面的写法是错误的
//	// 可以给arr1的大小固定一个大的空间，比如arr1[30]
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//
//	// 把arr2追加到arr1上
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main() 
//{
//	// 比较一下
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	// 这里常量字符串，第一个字符的地址赋值给指针
//	//
//	int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("pa == p2\n");
//	}
//	else if (strcmp(p1, p2)<0)
//	{
//		printf("p1<p2\n")	printf("%d\n", ret);
//	// 它是怎么比较的？比较长度吗？
//	// 比的是对应字符，a<s，如果第一个都是a，那么比后面的，一对一对往后比
//
//	return 0;
//};
//	}
//



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}

//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	//strncpy--模拟实现
//	strncpy(arr1, arr2, 6);
//
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	//
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//
//	return 0;
//}
