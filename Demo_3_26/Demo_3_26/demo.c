#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// 回顾
//
//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int main() 
//{
//	// 指针数组
//	int* arr[10];
//	// 数组指针
//	int*(*pa)[10] = &arr;
//	// 函数指针
//	int(*pAdd)(int, int) = Add;// 同 &Add
//
//	//int sum = (*pAdd)(1, 2);
//	// 同下，*可有可无
//	int sum = pAdd(1, 2);
//
//	printf("sum = %d\n", sum);
//
//	// 函数指针的数组
//	int(*pArr[4])(int, int);
//
//	// 指向函数指针数组的指针
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}


// 回调函数
// qsort函数的使用

// 先看看冒泡

//BubbleSort(int arr[], int sz) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		// 一趟冒泡排序
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
//	// 冒泡排序只能排整形
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


// qsort - 库函数
// quick sort - 算法思想-快速排序

//void qsort(
//	void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//);
// 
// void* 能接收任意类型的指针
// void* 不能进行解引用操作，因为没有具体类型，不知道要操作几个字节
// void* 不能进行加减运算，同理，没有具体类型，不知道步长是几个字节

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2) 
{
	// 比较两个整形值的函数
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
	// 比较名字就是比较字符串
	// 字符串如何比较？
	// 用strcmp函数比较
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void TestStruct()
{
	struct Stu s[3] = { {"LeBron", 36},{"Kobe", 41},{"Lisi", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	// 第一个参数：待排序数组的首元素地址
	// 第二个参数：待排序数组的元素个数
	// 第三个参数：待排序数组的每个元素的大小 - 单位是字节
	// 第四个参数：是函数指针，比较两个元素所用函数的地址，该函数需要自己实现
	//				函数指针的两个参数是，待比较的两个元素的地址
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
	// 趟数
	for (i = 0; i < sz - 1; i++) 
	{
		// 每一趟比较的次数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			// 两个元素的比较
			if (cmp((char*)base + j * width , (char*)base + (j + 1) * width) > 0) 
			{
				// 交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void bubble_sort_test_int()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 使用该函数的程序员，一定知道自己排序的是什么数据
	// 就应该知道如何比较待排序数组的元素
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
	
	// 冒泡排序只能排整形
	//TestInt();
	//TestFloat();
	//TestStruct();
	//bubble_sort_test_int();
	bubble_sort_test_struct();
	
	return 0;
}