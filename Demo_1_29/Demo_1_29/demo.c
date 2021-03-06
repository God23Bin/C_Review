#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
// 数组

// 数组是一组相同类型元素的集合

// 数组的创建

//int main() 
//{
//	// type arr_name[const_n]; -》 类型 数组名[常量]
//	// 创建一个数组 - 存放整型 - 10个
//	int arr1[10];
//
//	char arr2[5];
//
//	// 数组的初始化
//	int arr3[10] = { 1,2,3 };	// 不完全初始化，后面默认初始化为0
//	char arr4[5] = { 'a', 'b' };	// 不完全初始化，后面默认初始化为0
//	char arr5[5] = "ab";	// 效果与上面一样，只是第三个位置是\0
//	char arr6[] = "abcdef";	// 不给定数组大小，根据内容分配大小，最后一个放\0
//
//	printf("%d\n", sizeof(arr6));	// 应该打印 7	sizeof计算arr4所占空间的大小，放了7个元素，不管你\0不\0的，只关心空间，每个元素是一个char，char占1个字节，所以7 * 1 = 7
//	printf("%d\n", strlen(arr6));	// 应该打印 6	找长度，找到\0结束，不会算上\0
//
//	return 0;
//}

// 1. strlen 和 sizeof 没有什么关联
// 2. strlen 是求字符串长度的，只跟字符串有关
// 3. sizeof 是计算变量、数组、类型的大小的 - 单位是字节
// 4. sizeof 是操作符 strlen 是库函数，需要引头文件


//int main() 
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%d\n", sizeof(arr1));	// 4
//	printf("%d\n", sizeof(arr2));	// 3
//
//	printf("%d\n", strlen(arr1));	// 3
//	printf("%d\n", strlen(arr2));	// 第一眼以为是3，实际上没有结束符/0，所以是随机的，遇到\0就结束
//
//	return 0;
//}


//int main() 
//{
//	//char arr[] = "abcdef"; // [a][b][c][d][e][f][\0]
//	// 数组元素的访问
//	//printf("%c\n", arr[3]);
//	//for (int i = 0; i < (int)strlen(arr); i++)	//warning C4018:“<”: 有符号/无符号不匹配，那么就强转就不会出现警告
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	// 一般这样写
//	//int len = strlen(arr);
//	//for (int i = 0; i < len; i++)	//warning C4018:“<”: 有符号/无符号不匹配，那么就强转就不会出现警告
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// 一维数组在内存中的存储

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 想看在内存中的布局，那么就把地址打印出来看看
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	// &arr[0] = 0060F7B0	B0
//	// &arr[1] = 0060F7B4	B4
//	// &arr[2] = 0060F7B8	B8
//	// &arr[3] = 0060F7BC	BC - 12
//	// &arr[4] = 0060F7C0	C0
//	// &arr[5] = 0060F7C4	C4
//	// &arr[6] = 0060F7C8	C8
//	// &arr[7] = 0060F7CC	CC
//	// &arr[8] = 0060F7D0	D0
//	// &arr[9] = 0060F7D4	D4
//	// 发现每个都相差4，int类型每个元素都是4个字节，数组连续存放
//	// 综上，数组在内存中是连续存放的，地址由低到高
//	return 0;
//}

// 二维数组的创建与初始化

//int main() 
//{
//	//int arr[3][4];	// 3行4列的数组
//	//char arr2[5][6];
//	
//	//int arr[3][4] = { 1,2,3,4,5 };	// 不完全初始化，其他默认为0
//	//int arr[3][4] = { {1,2,3},{4,5} };	// 123放第一行，45放第二行
//
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };	// 行可以省略，列不可以省略！！！
//	//char arr2[5][6];
//
//	int arr[3][4] = { {1,2,3},{4,5} };
//	for (int i = 0; i < 3; i++) 
//	{
//		for (int j = 0; j < 4; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// 二维数组在内存中是怎样存储的？我们打印地址来看看

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	// &arr[0][0] = 00B3FA40
//	// &arr[0][1] = 00B3FA44
//	// &arr[0][2] = 00B3FA48
//	// &arr[0][3] = 00B3FA4C
//
//	// &arr[1][0] = 00B3FA50
//	// &arr[1][1] = 00B3FA54
//	// &arr[1][2] = 00B3FA58
//	// &arr[1][3] = 00B3FA5C
//
//	// &arr[2][0] = 00B3FA60
//	// &arr[2][1] = 00B3FA64
//	// &arr[2][2] = 00B3FA68
//	// &arr[2][3] = 00B3FA6C
//
//	// 二维数组在内存中还是一样连续存储的
//	// 每一行都可以当成一个一维数组，那么每一行的数组名是怎么写的呢?
//	// 就是arr[0]	arr[1]	arr[2]，为什么是这样呢？
//	// 你看你访问第一行时，是 arr[0][j]
//	// 你看你访问第二行时，是 arr[1][j]
//	// 你看你访问第三行时，是 arr[2][j]
//
//	// 再看看你一维数组访问时，是直接数组名arr[i]来访问的，同理，这里看成一维数组，所以就是数组名来访问
//	// 所以就是arr[0]	arr[1]	arr[2]就是数组名
//
//	return 0;
//}


// 数组作为函数参数

// 因为写代码的时候，经常会遇到数组作为参数，传入某个函数，比如 - 冒泡排序
// 两两元素进行比较，然后交换
// /\
// 9 8 7 6 5 4 3 2 1 0	
//	 /\
// 8 9 7 6 5 4 3 2 1 0
//	   /\
// 8 7 9 6 5 4 3 2 1 0
//	     /\
// 8 7 6 9 5 4 3 2 1 0
// ...
// 8 7 6 5 4 3 2 1 0 9

// 10个元素
// 第一趟比较了9次

// /\
// 8 7 6 5 4 3 2 1 0 9
//	 /\
// 7 8 6 5 4 3 2 1 0 9
//	   /\
// 7 6 8 5 4 3 2 1 0 9
// ...
// 7 6 5 4 3 2 1 0 8 9

// 第二趟比较了8次

//元素	10个									n个
//趟数		1	2	3	4	5	6	7	8	9	i
//比较次数  9	8	7	6	5	4	3	2	1	j = n - i

// 综上，n个元素，比较n - 1趟，第i趟，比较n - i次



//void bubble_sort(int arr[], int n) 
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//
//	
//	for (i = 0; i < n; i++) 
//	{
//		// 使用flag来标记，进行优化，有序的话就不需要进行排序了
//		int flag = 1; // 假设这一趟要排序的数据已经有序
//		for (j = 0; j < n - i; j++) 
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				int flag = 0; // 有交换，说明本趟排序的数据不完全有序
//			}
//		}
//		if (flag) 
//		{
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	// 对arr进行排序，排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = sz - 1;
//
//	bubble_sort(arr, len);	// 冒泡排序函数
//	for (int i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// 关于数组名
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("数组首元素地址 -> arr     = %p\n", arr);
	printf("数组首元素地址 -> &arr[0] = %p\n", &arr[0]);

	printf("*arr = %d\n", *arr);

	// 两个情况，数组名不是首元素地址的情况
	// 1. sizeof(数组名) - 此时的数组名表示整个数组，计算的是整个数组的大小，单位是字节
	// 2. &数组名， 数组名代表整个数组，取出的是整个数组的地址
	printf("整个数组的地址 -> &arr    = %p\n", &arr); // 虽然打印出来相同，但意义不同

	// +1看看，就能看出来，+1后就到第二个元素
	printf("arr + 1     = %p\n", arr + 1);
	printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
	printf("&arr + 1    = %p\n", &arr + 1);

	return 0;
}