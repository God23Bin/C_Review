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

//int main() 
//{
//	//int* p = NULL;// ����ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char* pc = NULL;// �ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	// ����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	// arr - ��Ԫ�ص�ַ
//	// &arr[0] - ��Ԫ�ص�ַ
//	// &arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;// �����ַ������
//	// �����p���� ����ָ��
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

// ����ָ��һ���õ���ά�����Ǳ߲ŷ���ʹ��

//// �������������ʽ
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
//// ������ָ��
//// ������ָ�����ʽ
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
//	print1(arr, 3, 5);	// arr - ������ - ��Ԫ�ص�ַ
//	print2(arr, 3, 5);	// arr - arr[0][]�ĵ�ַ
//
//	look();
//	return 0;
//}

//int arr[5];
//int* parr1[10];// parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*������parr1��ָ������
//int(*parr2)[10];// parr2��һ��ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//int(*parr3[10])[5];// parr3��һ�����飬��5��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ�����5��Ԫ�أ�ÿ��Ԫ����int


// �ع�

//int main() 
//{
//	// �ַ�ָ��
//	char ch = '2';
//	char* pc = &ch;
//	const char* pc2 = "abcdefg";
//
//	// ָ������ - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//
//	// ����ָ�� - ָ�������ָ��
//	int arr2[5];
//	//int* pa[5] = &arr2; // ����pa�ͺ�[]��ϣ���������
//	int(*pa)[5] = &arr2; // ����pa��*��ϣ�pa��������ָ��
//	// ָ�����;���int(*)[5]
//
//	int(*parr3[10])[5];
//	
//	return 0;
//}

// ���鴫�� ������������ָ�룬��û����
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
//// �������ok������д
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
//// ���ǿ��Բ���д�ģ�����ʡ�Ե�
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
//	test(arr);	// ��ά���鴫��
//	// ��ά���� ��������������ʱ��
//	// ������������Ԫ�ص�ַ
//	// ���ڶ�ά���飬���ǵ�һ�еĵ�ַ
//	test1(arr);
//	return 0;
//}

// ָ�봫��
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
//	// һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

// ˼��
// ��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������

// ����
//void test1(int* p) 
//{
//	// test1 �����ܽ���ʲô������
//}
//
//void test2(char* p) 
//{
//	// test2 �����ܽ���ʲô������
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


// ����ָ�봫��

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

//void test(int** p) // ˵�����Դ�ָ������
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
//	// ��һ�����飬˵������ָ��������Խ���ָ������
//	int* arr[10];
//	test(arr);
//	return 0;
//}

// ����ָ�� - ָ�������ָ��

// ����ָ�� - ˵����ָ������ָ��

// ���䣺C�����У��������������ÿ�ͷ��д��ĸ�ķ�ʽ����
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
//	// &������ �� ������ ���Ǻ����ĵ�ַ
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

// ������Ȥ����

//(*(void(*)())0)();
//(*(   void(*)()   )0)();	// ��0ǿ������ת������ɺ���ָ������
//(   *(void(*)())0  )();	// Ȼ����н�����

//void (*signal(int, void(*)(int)))(int);
//      *signal(  int, void(*)(int)  ) -  signal���������������� - 
//void (   *signal(int, void(*)(int))   )(int);

// ��C������ȱ�ݡ�

// ���� - ���м�

// ��Ϊ��ǰ��� typedef unsigned int uint;
// ��������
// ���ʱ��������д��typedef void(*)(int) pflun_t; ����д����
// ֻ������������д
//typedef void(*pflun_t)(int);
//pflun_t signal(int, pflun_t);

// signal ��һ����������
// signal �����Ĳ���������
// ��һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
// signal �����ķ������ͣ�Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ�������int����������void

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
//	// * ��ʲô��˼�أ� �����һ��
//	// ˵��*����������ûʲô�õģ���ȫ���ǰ���
//	printf("%d\n", (pa)(2, 3));	// 5
//	// ���pa�Ǻ���ָ�룬���ǿ��Խ����õ�����
//	// ��Ȼ��������ֱ��ʹ�ã�����Ҫ������
//	// Add������pa��˵��pa����Add����Ȼ����ֱ��pa����
//	// ��Ȼ��*Ҳ��������ģ����ǽ����������ú���
//	// ���������þ�������
//	return 0;
//}


// ����ָ������

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
//	// ָ������
//	int* arr[5];
//	int (*pa)(int, int) = Add;	//Sub/Mul/Div���⼸��������ַ���ܴ�
//	// ��ʱ������Ҫһ�����飬���������Դ��4��������ַ������Ǻ���ָ�������
//	// ����ָ������
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };// ����ָ������飬ÿ��Ԫ�ض���һ������ָ��
//	int i = 0;
//	for (i = 0; i < 4; i++) 
//	{
//		printf("%d\n", parr[i](2, 3));// 5 -1 6   2��3����0��2 0
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
// дһ������ָ��pf���ܹ�ָ��my_strcpy
// дһ������ָ�����飬�ܹ����my_strcpy�����ĵ�ַ