#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ָ����ʲô

// ָ���ָ������

// Ұָ��

// ָ������

// ָ�������

// ����ָ��

// ָ������


// �ڴ�

// �ڴ��ţ�-�ڴ��ַ����������
// ����-���ź�-


// �ڴ滮�ֵĴ�С��-һ���ڴ浥Ԫ�Ļ��ִ�С��һ���ֽ�

//int main() 
//{
//	int a = 10;
//	int* p = &a;	// ָ����������ַ����ָ�룬ָ��=��ַ���е���
//	
//	return 0;
//}

// ָ���ָ������

// ָ�����͵�����

//int main() 
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	// ��С����4���ֽ�/8���ֽڣ�Ϊʲô��Ҫ�����ͣ�
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	// ���ִ�ӡ�ĵ�ַһ��
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	// ���ʹ���������
//	// �������õ�ʱ�򣬲�һ�������͵�һ�ı�ͻ�ı�4���ֽ�
//	// �����char���ͣ���ô�ͻ�ı�1���ֽ�
//
//	// �ܵ���˵��ָ�����;�����ָ����н����ò�����ʱ���ܹ������ڴ�ռ�Ĵ�С
//	// int* p; *p �ܹ�����4���ֽ�
//	// char* p; *p �ܹ�����1���ֽ�
//	// doubel* p; *p �ܹ�����8���ֽ�
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
//	// �ƶ���4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	//0093FADC
//	//0093FADD
//	// �ƶ���1���ֽ�
//
//	// ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//	// int*p; p + 1 --��4�ֽ�
//	// char*p; p + 1 --��1�ֽ�
//	// double*p; p + 1 --��8�ֽ�
//	return 0;
//}

// ���ϣ�ָ�����������������


//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = arr; // ������ - ����������һ��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		*(p + i) = 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// Ұָ�� ����ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�

// ����Ұָ���ԭ��
// ָ��δ��ʼ��

//int main() 
//{
//	int a;// �ֲ���������ʼ����Ĭ�������ֵ
//	int* p;// �ֲ�ָ��������ͱ���ʼ��Ĭ�����ֵ
//	return 0;
//}


// ָ��Խ����ʣ�Ҳ�ᵼ��Ұָ��
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

// ָ��ָ��� �ڴ�ռ� �ͷ�

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
//	// NULL ��������ʹ�ã����óɿ�ָ��
//	p = NULL;
//	// δ��Ҫ�õĻ������ж���
//	if (p != NULL) 
//	{
//		*p = 30;
//	}
//	return 0;
//}


// ָ������

// ָ�� �Ӽ� ����
// ָ�� ��ȥ ָ��
// ָ���ϵ����

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
//	// ָ�� �Ӽ� ����
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
//	printf("%d\n", &arr[9] - &arr[0]); // ָ���ָ�룬�ó�����֮���Ԫ�ظ���
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
//	// strlen - ���ַ�������
//	// �ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2
//
//	// my_strlen();
//
//	char arr[] = "nba";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// ָ�� ��ϵ ����

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
//	// 1. &arr - &��������ʱ��������������Ԫ�ص�ַ - &��������ȡ��������������ĵ�ַ
//	// 2. sizeof(arr) - sizeof(������) - ����������������Ĵ�С
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


// ����ָ��
//int main() 
//{
//	int a = 19;
//	int* pa = &a;
//	int** p_pa = &pa; // p_pa���Ƕ���ָ��
//	//int*** p_p__pa = &p_pa; // p_p__pa����������ַ
//	**p_pa = 20;
//	printf("%d\n", **p_pa);
//	return 0;
//}

// ָ������ - ���ָ�������

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