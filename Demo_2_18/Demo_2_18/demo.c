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

// ��ѭ��
// 1.ջ��Ĭ��ʹ�ã�
//		��ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
// 2.���������±����������ַ�ɵ͵��߱仯

// ��VS�У��ڴ沼�־���������i�ȶ����ˣ�Ȼ��ͻ���ջ���ߵ�ַ���洢i
// arr�ͻ���i���������ַ

// ��VC6.0�У�i <= 10�ͻ���ѭ��
// ��gcc�У�i <= 11�ͻ���ѭ��


//void my_strcpy(char* dest, char* src) 
//{
//	while (*src != '\0') 
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	// ��ֵ����б��0��ȥ
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

//void my_strcpy(char* dest, const char* src)	// const ��ֹĿ�ĵ�ַ��ֵ��Դ��ַ��˵���˷�ֹ���Լ�����д��
//{
//	// ����
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
//	// �ַ�������
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
//	// const ����ָ������� * �����ʱ����const int* p�����ε���*p��Ҳ����˵������ͨ��p�ı�*p
//	// const ����ָ������� * ���ұ�ʱ����int* const p���ε���p��Ҳ����˵��ָ������������ܱ��ı��ˡ�
//
//
//	printf("%d\n", num);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)	// const ��ֹĿ�ĵ�ַ��ֵ��Դ��ַ��˵���˷�ֹ���Լ�����д��
//{
//	char* res = dest;
//	// ����
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
//	// �ַ�������
//	char arr1[] = "##############";
//	char arr2[] = "nba";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int my_strlen(const char* str) 
//{
//	int count = 0;
//	// ��ָ֤����Ч��
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

