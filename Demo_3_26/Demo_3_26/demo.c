#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// �ع�
//
//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int main() 
//{
//	// ָ������
//	int* arr[10];
//	// ����ָ��
//	int*(*pa)[10] = &arr;
//	// ����ָ��
//	int(*pAdd)(int, int) = Add;// ͬ &Add
//
//	//int sum = (*pAdd)(1, 2);
//	// ͬ�£�*���п���
//	int sum = pAdd(1, 2);
//
//	printf("sum = %d\n", sum);
//
//	// ����ָ�������
//	int(*pArr[4])(int, int);
//
//	// ָ����ָ�������ָ��
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}


// �ص�����
// qsort������ʹ��

// �ȿ���ð��

//BubbleSort(int arr[], int sz) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		// һ��ð������
//		for (j = 0; j < sz -1 - i; j++) 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
struct Stu 
{
	char name[20];
	int age;
};
//
//int main() 
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ð������ֻ��������
//	//struct Stu s[3] = { {"LeBron", 36},{"Kobe", 41},{"Lisi", 25} };
//	//float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	BubbleSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// qsort - �⺯��
// quick sort - �㷨˼��-��������

//void qsort(
//	void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//);
// 
// void* �ܽ����������͵�ָ��
// void* ���ܽ��н����ò�������Ϊû�о������ͣ���֪��Ҫ���������ֽ�
// void* ���ܽ��мӼ����㣬ͬ��û�о������ͣ���֪�������Ǽ����ֽ�

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2) 
{
	// �Ƚ���������ֵ�ĺ���
	return *(int*)e1 - *(int*)e2;
}

void TestInt() 
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2) 
{
	if (*(float*)e1 == *(float*)e2) return 0;
	else if (*(float*)e1 > *(float*)e2) return 1;
	else return -1;
}


void TestFloat() 
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2) 
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2) 
{
	// �Ƚ����־��ǱȽ��ַ���
	// �ַ�����αȽϣ�
	// ��strcmp�����Ƚ�
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void TestStruct()
{
	struct Stu s[3] = { {"LeBron", 36},{"Kobe", 41},{"Lisi", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	// ��һ���������������������Ԫ�ص�ַ
	// �ڶ��������������������Ԫ�ظ���
	// �����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
	// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ���ú�����Ҫ�Լ�ʵ��
	//				����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
}

void Swap(char* buf1, char* buf2, int width) 
{
	int i = 0;
	for (i = 0; i < width; i++) 
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2)) 
{
	int i = 0;
	// ����
	for (i = 0; i < sz - 1; i++) 
	{
		// ÿһ�˱ȽϵĴ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			// ����Ԫ�صıȽ�
			if (cmp((char*)base + j * width , (char*)base + (j + 1) * width) > 0) 
			{
				// ����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void bubble_sort_test_int()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// ʹ�øú����ĳ���Ա��һ��֪���Լ��������ʲô����
	// ��Ӧ��֪����αȽϴ����������Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void bubble_sort_test_struct()
{
	struct Stu s[3] = { {"LeBron", 36},{"Kobe", 41},{"Lisi", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main() 
{
	
	// ð������ֻ��������
	//TestInt();
	//TestFloat();
	//TestStruct();
	//bubble_sort_test_int();
	bubble_sort_test_struct();
	
	return 0;
}