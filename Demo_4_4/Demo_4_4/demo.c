#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. strlen(char* str)

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

// ʹ��ָ�� - ָ��
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


//3. strcat(char* dest, const char* src) 
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


//4. strcmp(const char* str1, const char* str2)
// 
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

// strcpy()�عˣ���strncpy()

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
//	// strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int rest = strcmp(p1, p2);
//	int rest = strncmp(p1, p2, 3);	// �Ƚ�ǰ3��
//	int rest = strncmp(p1, p2, 4);	// �Ƚ�ǰ4��
//	printf("%d\n", rest);
//	return 0;
//}


// strstr(const char* string, const char* strCharSet) �����ַ���

// ���ĵ���Ҫע�����
// NULL - ��ָ��
// NUL ���� Null - '\0'

//int main() 
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	// ��abcdef������def���ҵ��Ļ��������ĵ�ַ���Ҳ������ؿ�ָ��
//	char* rest = strstr(p1, p2);
//	if (rest == NULL) 
//	{
//		printf("�Ӵ�������\n");
//	}
//	else 
//	{
//		printf("%s\n", rest);
//	}
//
//	return 0;
//}

// ģ��ʵ��һ��

//char* my_strstr(const char* p1, const char* p2) 
//{
//	// ��ָ֤�����Ч�ԣ�����assert
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	// ���p2�ǿ��ַ������ǾͱȲ���
//	if (*p2 == '\0') 
//	{
//		printf("���ַ����Ȳ��ˣ�����p1");
//		return p1;
//	}
//	// �����Ĳ���ʵ��
//	while (*p1) // �ж�*p1��'\0'�𣿲��ǾͿ��Բ���
//	{
//		//while (*p1 == *p2)	// �ж�*p1����*p2�����ھͶ�����ƫ��
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2) )	// �������ƣ�*p1,*p2��������\0������\0�ͽ����ˣ�û�����ɱ���
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0') 
//		{
//			// ˵��ƥ�䵽��
//			return 
//		}
//		p1++;	// �����ڣ���ôp1����ƫ��
//	}
//}

// �������������
// abbbcdef
// bbc
// ����ƥ�����ֵ�ʱ�����û�м�¼��ʼƥ���λ�ã���ô�ͻ���Զ���Ҳ���bbc


//char* my_strstr(const char* p1, const char* p2)
//{
//	// ��ָ֤�����Ч�ԣ�����assert
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	// p1,p2��Ҫ����
//	// ��Ҫһ��������¼���ĸ�λ�ÿ�ʼƥ��
//	//char* s1 = p1;	// ���︳ֵ����ν���͸�NULL����
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* current = (char*)p1;	// ����ǿ������ת������Ϊp1��const���Σ���ֵ����char*���û�б����ģ�����ǿת�£���Ȼ�ᱨ����
//	// ���p2�ǿ��ַ������ǾͱȲ���
//	if (*p2 == '\0')
//	{
//		printf("���ַ����Ȳ��ˣ�����p1");
//		return (char*)p1;
//	}
//	// �����Ĳ���ʵ��
//	while (*current) // �ж�*p1��'\0'�𣿲��ǾͿ��Բ���
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
//			// ˵��ƥ�䵽��
//			return current;	// �����Ӵ���ַ
//		}
//		if (*s1 == '\0') 
//		{
//			// ����Ӵ��Ƚϳ�����ô�϶����Ҳ�����
//			return NULL;
//		}
//		current++;	// �����ڣ���ôp1����ƫ��
//	}
//	return NULL;	//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	//char* p1 = "abcdef";
//	//char* p2 = "def";
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	// ��abcdef������def���ҵ��Ļ��������ĵ�ַ���Ҳ������ؿ�ָ��
//	char* rest = my_strstr(p1, p2);
//	if (rest == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", rest);
//	}
//
//	return 0;
//}