#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. strlen(char* str)

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
//int my_strlen(char* str)
//{
//	  assert(str != NULL);
//    char* p = str;
//    while(*p == '\0')
//    {
//        return 0;
//    }
//    return 1 + my_strlen(p + 1);
//}
//
//int main() 
//{
//    int len = my_strlen("abcdefg");
//    printf("%d\n", len);
//    return 0;
//}

// 使用指针 - 指针
//int my_strlen(char* s) 
//{
//  assert(s != NULL);
//	char* p = s;
//	while (*p != '\0') 
//	{
//		p++;
//	}
//	return p - s;
//}

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

//2. strcpy(char* dest, const char* src)

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


//3. strcat(char* dest, const char* src) 
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


//4. strcmp(const char* str1, const char* str2)
// 
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

// strcpy()回顾，看strncpy()

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

// strncat()

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

// strncmp(const char* string1, const char* string2, size_t num);

//int main()
//{
//	// strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int rest = strcmp(p1, p2);
//	int rest = strncmp(p1, p2, 3);	// 比较前3个
//	int rest = strncmp(p1, p2, 4);	// 比较前4个
//	printf("%d\n", rest);
//	return 0;
//}


// strstr(const char* string, const char* strCharSet) 查找字符串

// 读文档需要注意的是
// NULL - 空指针
// NUL 或者 Null - '\0'

//int main() 
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	// 在abcdef中找找def，找到的话返回它的地址，找不到返回空指针
//	char* rest = strstr(p1, p2);
//	if (rest == NULL) 
//	{
//		printf("子串不存在\n");
//	}
//	else 
//	{
//		printf("%s\n", rest);
//	}
//
//	return 0;
//}

// 模拟实现一波

//char* my_strstr(const char* p1, const char* p2) 
//{
//	// 保证指针的有效性，所以assert
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	// 如果p2是空字符串，那就比不了
//	if (*p2 == '\0') 
//	{
//		printf("空字符串比不了，返回p1");
//		return p1;
//	}
//	// 真正的查找实现
//	while (*p1) // 判断*p1是'\0'吗？不是就可以查找
//	{
//		//while (*p1 == *p2)	// 判断*p1等于*p2？等于就都进行偏移
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2) )	// 继续完善，*p1,*p2都不能是\0，遇到\0就结束了，没东西可比了
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0') 
//		{
//			// 说明匹配到了
//			return 
//		}
//		p1++;	// 不等于，那么p1往后偏移
//	}
//}

// 上面代码有问题
// abbbcdef
// bbc
// 比如匹配这种的时候，如果没有记录开始匹配的位置，那么就会永远都找不到bbc


//char* my_strstr(const char* p1, const char* p2)
//{
//	// 保证指针的有效性，所以assert
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	// p1,p2不要往后动
//	// 需要一个变量记录从哪个位置开始匹配
//	//char* s1 = p1;	// 这里赋值无所谓，就给NULL好了
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* current = (char*)p1;	// 这里强制类型转换，因为p1是const修饰，赋值给了char*这个没有保护的，所以强转下，不然会报警告
//	// 如果p2是空字符串，那就比不了
//	if (*p2 == '\0')
//	{
//		printf("空字符串比不了，返回p1");
//		return (char*)p1;
//	}
//	// 真正的查找实现
//	while (*current) // 判断*p1是'\0'吗？不是就可以查找
//	{
//		s1 = current;
//		s2 = (char*)p2;
//	
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			// 说明匹配到了
//			return current;	// 返回子串地址
//		}
//		if (*s1 == '\0') 
//		{
//			// 如果子串比较长，那么肯定是找不到的
//			return NULL;
//		}
//		current++;	// 不等于，那么p1往后偏移
//	}
//	return NULL;	//找不到子串
//}
//
//int main()
//{
//	//char* p1 = "abcdef";
//	//char* p2 = "def";
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	// 在abcdef中找找def，找到的话返回它的地址，找不到返回空指针
//	char* rest = my_strstr(p1, p2);
//	if (rest == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", rest);
//	}
//
//	return 0;
//}


// strtok
// char* strtok(char* str, const char* sep);

//int main()
//{
//	// 192.168.31.121
//	// 192 168 31 121 - strtok
//	// god23bin@qq.com
//	// god23bin qq com - strtok
//
//	char arr[] = "god23bin@qq.com";
//	char* p = "@."; // 分隔符  字符串
//	//strtok(arr, p);
//
//	// god23bin@qq.com
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	// 切割buf中的字符串
//
//	//char* rest = strtok(arr, p);
//	//printf("%s\n", rest);	//god23bin
//	//rest = strtok(NULL, p);
//	//printf("%s\n", rest);	//qq
//	//rest = strtok(NULL, p);
//	//printf("%s\n", rest);	//com
//
//	// 换下写法
//
//	char* rest = NULL;
//	for (rest = strtok(arr, p); rest != NULL; rest = strtok(NULL, p)) 
//	{
//		printf("%s\n", rest);
//	}
//	return 0;
//}

// strerror

//#include <errno.h>

//int main() 
//{
//	// 0 - No error
//	char* str = strerror(0);
//	printf("%s\n", str);
//	// 1 - Operation not permitted
//	char* str = strerror(1);
//	printf("%s\n", str);
//	// 2 - No such file or directory
//	char* str = strerror(2);
//	printf("%s\n", str);
//	// ...
//	// 以上是C语言实现的错误码
//	// 错误码 - 错误信息
//
//	// errno - 是一个全局的错误码的变量
//	// 当C语言库函数在执行过程中，发生了错误
//	// 就会把对应的错误码，赋值到errno中
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}

//int main() 
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


// 字符分类函数

#include <ctype.h>
//
//int main() 
//{
//	char ch = 'w';
//	//int rest = islower(ch);
//	int rest = isdigit(ch);
//	printf("%d\n", rest);
//	return 0;
//}

// 字符转换函数
// char tolower(char c);
// char toupper(char c);
//int main() 
//{
//	char ch1 = tolower('Q');
//	char ch2 = toupper('q');
//	putchar(ch1);
//	putchar(ch2);
//	return 0;
//}


// 内存函数
// memcpy
// memmove
// memcmp
// memset

//int main() 
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	// 把arr1的内容拷贝到arr2中
//	strcpy(arr2, arr1);
//	// 那么这里肯定会有警告，因为类型不同
//	// 不管，直接运行
//	// 但是，通过Debug，看内存，可以发现实现不了完整的拷贝
//	// 所以需要内存拷贝
//	//memcpy
//	return 0;
//}

//void* memcpy(void* destination, const void* source, size_t num);

struct S
{
	char name[20];
	int age;
};

//int main() 
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	struct S arr3[] = { {"LeBron", 36}, {"Kobe", 41} };
//	struct S arr4[3] = { 0 };
//
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

// 模拟实现memcpy
void* my_memcpy(void* dest, const void* src, size_t num) 
{
	assert(dest != NULL);
	assert(src != NULL);
	void* rest = dest;
	// void* 不能直接解引用，那么如何复制呢？
	// 给了num个字节，也就是需要复制num个字节
	// 那就转换成char*，一个一个字节的复制过去
	while (num--) 
	{
		*(char*)dest = *(char*)src;
		//++(char*)dest;
		//++(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return rest;
}

//int main() 
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	struct S arr3[] = { {"LeBron", 36}, {"Kobe", 41} };
//	struct S arr4[3] = { 0 };
//
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	// 想把12345 拷贝到 34567上去
//	// 应该打印 1 2 1 2 3 4 5 8 9 10
//	my_memcpy(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	// 但是输出 1 2 1 2 1 2 1 8 9 10
//
//	// 也就是说，如果拷贝的地方重叠了，那么就会出现这种情况
//
//	// 解决：可以从后往前拷
//	// 但是也不对，不能一概而论
//
//	// memmove();可以处理这种重叠拷贝
//
//	return 0;
//}


// memmove()
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	// 想把12345 拷贝到 34567上去
//	// 应该打印 1 2 1 2 3 4 5 8 9 10
//	memmove(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// C语言标准：
// memcpy 只要处理 不重叠的内存拷贝就可以
// memmove 处理重叠内存的拷贝


// 模拟实现memmove
void* my_memmove(void* dest, void* src, size_t num) 
{
	//dest落在了src的左边，前往后拷贝
	//dest落在了src的右边，同时没有超过那个重叠的边界的时候，从后往前拷贝
	assert(dest != NULL);
	assert(src != NULL);
	void* rest = dest;
	// void* 不能直接解引用，那么如何复制呢？
	// 给了num个字节，也就是需要复制num个字节
	// 那就转换成char*，一个一个字节的复制过去
	if (dest < src) 
	{
		//dest落在了src的左边，前往后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			//++(char*)dest;
			//++(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else 
	{

	}
	return rest;
}

