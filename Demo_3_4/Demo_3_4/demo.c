#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ָ�����

// ��������ָ��

//1. �ַ�ָ��
//2. ָ������
//3. ����ָ��
//4. ���鴫�κ�ָ�봫��
//5. ����ָ��
//6. ����ָ������
//7. ָ����ָ�������ָ��
//8. �ص�����
//9. ָ�������������Ľ���

// �ع�
// ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
// ָ��Ĵ�С�ǹ̶���4/8���ֽڣ�32λƽ̨/64λƽ̨��
// ָ�������ͣ�ָ�����;�����ָ��Ӽ������Ĳ��������н����ò���ʱ��Ȩ��
// ָ�������


//1. �ַ�ָ��

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
//	char* p = "abcdef"; // "abcdef" ��һ�������ַ�����������ַ�������Ԫ�ص�ַ��ֵ��p��ȥ�ˣ�Ҳ�ǿ��Ե�
//	printf("%s\n", p);
//
//	return 0;
//}


//int main() 
//{
//	char* p = "abcdef"; // "abcdef" ��һ�������ַ�����������ַ�������Ԫ�ص�ַ��ֵ��p��ȥ�ˣ�Ҳ�ǿ��Ե�
//	// ����������Ϊ�Ǵ����
//	*p = 'W';
//	printf("%s\n", p);
//	// Segmentation fault - �δ���
//	// �����ڴ���ʴ���
//	// segmentfault.com
//	return 0;
//}

//int main() 
//{
//	const char* p = "abcdef"; // ׼ȷд��������const
//	// ����������Ϊ�Ǵ����
//	*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}


// ������ - ���Խ�ָoffer

// ���ʲô��
//int main() 
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (arr1 == arr2) // ��������� p1 == p2 �أ�
//	{
//		printf("�кк�\n");
//	}
//	else 
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}


//2. ָ������
// ��������

//int main() 
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4]; // �������ָ������� - ָ������
//	char* pch[5]; // ����ַ�ָ������� - ָ������
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

// ��ȷ��������ָ�����飿ʲôʹ��������

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


//3. ����ָ��

