#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ʹ�ü�����
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

// ʹ�õݹ�

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
//	// my_strlen()��ʵ��
//	// 1. �������ķ���
//	// 2. �ݹ�
//	// 3. ָ�� - ָ��
//
//	int len = strlen("abcdef");
//
//	// �������ʲô��strlen()�����޷�������
//	if (strlen("abc") - strlen("abcdef") > 0) 
//	{
//		printf("�к�\n");
//	}
//	else 
//	{
//		printf("����\n");
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
//	// �Ż�1
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;	// '\0'
//
//	// �Ż�2
//	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	char* rest = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// ����Ŀ�Ŀռ����ʼ��ַ
//	return rest;
//}
//
//int main() 
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	// ��arr2�����ݿ�����arr1��
//	//strcpy(arr1, arr2);
//	// ��ô������
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
//	// 1. �ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0') 
//	{
//		dest++;
//	}
//	// 2. ׷��
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
//	//// ��arr2׷�ӵ�arr1��
//	//strcat(arr1, arr2);
//	//printf("%s\n", arr1);
//	// �ᱨ���ռ䲻���������д���Ǵ����
//	// ���Ը�arr1�Ĵ�С�̶�һ����Ŀռ䣬����arr1[30]
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//
//	// ��arr2׷�ӵ�arr1��
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main() 
//{
//	// �Ƚ�һ��
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	// ���ﳣ���ַ�������һ���ַ��ĵ�ַ��ֵ��ָ��
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
//	// ������ô�Ƚϵģ��Ƚϳ�����
//	// �ȵ��Ƕ�Ӧ�ַ���a<s�������һ������a����ô�Ⱥ���ģ�һ��һ�������
//
//	return 0;
//};
//	}
//



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}

//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
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
//	//strncpy--ģ��ʵ��
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
