#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int result = add(a, b);
//	printf("%d\n", result);
//	return 0;
//}

//int main() 
//{
//	// strcpy - string copy
//	// strlen - string length
//
//	char arr1[] = "Guangzhou";
//	char arr2[] = "#################";
//	strcpy(arr2, arr1);
//	printf("arr2 = %s\n", arr2);
//	return 0;
//}

//int main()
//{
//	// memset - memory set �ڴ� ����
//
//	char arr[] = "Hello World!";
//	// ��ǰ�������Ϊ * 
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


// �Զ��庯��


// дһ���������ҳ��������Ľϴ�ֵ

//int get_max(int x, int y) 
//{
//	if (x > y) 
//	{
//		return x;
//	}
//	else 
//	{
//		return y;
//	}
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


// дһ�����������������͵�����

//void swap(int* x, int* y)	// ָ��������洢�����ĵ�ַ��Ҳ����˵������Ҫ����ַ
//{
//	int temp = 0;
//	temp = *x;	// �����ò�����ͨ����ַ�ҵ���Ӧ�ı�������ӷ���
//	*x = *y;
//	*y = temp;
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

// �β� - ֻ�к��������õĹ����вŻ�ʵ��������Ȼ������ڣ����Ա���Ϊ��ʽ�ϵĲ���
// ʵ�� - 
// ���Լ򵥵���Ϊ���β�ʵ�������൱��ʵ�ε�һ����ʱ�������޸��ββ���Ӱ�쵽ʵ��


// �����ĵ���

// ��ֵ���� - ֵ����
// ��ַ���� - ��ַ����

// ��ϰ
// ���ж�һ�����ǲ��������ĺ���
// ���ж�ĳ���ǲ�������ĺ���
// ʵ��������������Ķ��ֲ��Һ���
// һ��������ÿ����һ�θú������ͽ�numֵ����1


// 1. ���ж�һ�����ǲ��������ĺ���
//int is_sushu(int num) 
//{
//	for (int i = 2; i < num; i++) 
//	{
//		if (num % i == 0) // �����һ�����ܱ�num�������������� 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

// �Ż�
//int is_sushu(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0) // �����һ�����ܱ�num�������������� 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() 
//{
//	// ��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		if ((is_sushu(i))) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 2. ���ж�ĳ���ǲ�������ĺ���

//int is_leap_year(int y) 
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//int main() 
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) 
//	{
//		// �ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year)) 
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


// 3. ʵ��������������Ķ��ֲ��Һ���

//int binary_search(int arr[], int k, int len) // �����������������Ԫ�صĵ�ַ��ʲô�����գ�ָ�룬������д�ı����������飬ʵ������һ��ָ��
//{
//	// ���ֲ��ҵ�ʵ��
//	//int len = sizeof(arr) / sizeof(arr[0]); // ����sizeof(arr)�����ָ��Ĵ�С
//	int left = 0;
//	int right = len - 1;
//	
//
//	while (left <= right)	// ����ע���� <=��û�еȺŵĻ����ͽ��������Ҳ���Ҫ�ҵ�Ԫ��
//	{
//		int mid = (left + right) / 2;	// �������֮ǰ�Ĵ��ŵ���while���棬��������棬ÿ�ζ��������mid
//		if (k > arr[mid])	// ��� k > mid������mid���ұߣ���ôleft�ͱ��mid + 1 
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;	// �ҵ����ظ��±�
//		}
//	}
//	if (left > right)	// ����±�����ұߣ�˵���Ҳ���
//	{
//		return -1;
//	}
//}
//
//int main() 
//{
//	// ���ֲ���
//	// ��һ�����������в��Ҿ����ĳ������һ�������������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int result = binary_search(arr, k, len);	//����ȥ����arr��Ԫ�صĵ�ַ
//	if (result == -1) 
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else 
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", result);
//	}
//	return 0;
//}

// 4. һ��������ÿ����һ�θú������ͽ�numֵ����1

//void make_change(int* p) 
//{
//	//*p++;	// ����д���У�++���ȼ��Ƚϸߣ�ֱ��������p++������*p++
//	(*p)++;
//}
//
//int main() 
//{
//	int num = 0;
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	make_change(&num);
//	printf("num = %d\n", num);
//	return 0;
//}


// ������Ƕ�׵��ú���ʽ����
// Ƕ�׵��ã�����ң��ҵ��㣬�л����
// ��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main() 
//{
//	int len = strlen("abc");
//	// 1
//	printf("%d\n", len);
//	// 2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main() 
//{
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//
//	return 0;
//}

// �����������Ͷ���

// �����������ִ�У���Ҫ����������ôһ����������Ȼ���Ҳ����������㺯��������������

//int add(int x, int y);	// ���к�������
//
//int main() 
//{
//	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int add(int x, int y)	// ���к�������
//{
//	return x + y;
//}

// Ȼ��ʵ���ϣ������������Ͷ��岻�������õģ���������ԣ���add()�����Ķ���ŵ�add.c�У������������ŵ�ͷ�ļ�add.h��
// Ȼ�������������ͷ�ļ�������ʹ�ú���
// ΪʲôҪ������ ������ܶ���

//#include "add.h"	// �Լ�д��ͷ�ļ�����""������
//
//int main() 
//{
//	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


// �����ݹ�
// �ݹ��˼����ʲô�ǵݹ飿����˵���ݹ���һ�ֺ���ֱ�ӻ��ӵ��������һ�ַ�����
// ͨ����һ�����͸��ӵ�����ת��Ϊһ����ԭ�������ƵĹ�ģ��С��������������⣬ʹ���������������������������������Ҫ�Ķ���ظ�����
// ˵���ˣ��ݹ���ǵ��Լ������»�С

// �ݹ��������Ҫ����
// 1. ������������������������������ʱ�򣬵ݹ�㲻�ټ�������
// 2. ÿ�εݹ���ú󣬻�Խ��Խ�ӽ������������


// ÿһ�κ������ö�����ջ������ռ䣬�������˵Ļ��ͻ����ջ��� stack overflow

// �ڴ�����
// ջ��
//		�ֲ�����
//		�����β�
// ����
//		��̬���ٵ��ڴ棬����malloc(), calloc()
// ��̬��
//		ȫ�ֱ���
//		static���εı���


// ��ϰ
// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234���ͻ���� 1 2 3 4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);	// 1234
//	int last_position = 0;
//	//1234 % 10; // 4
//	//1234 /10 = 123 % 10; // 3
//	//123 /10 = 12 % 10; // 2
//	// �ݹ�
//	print(input);
//	//print(1234);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}


// ��д��������������ʱ���������ַ����ĳ���

// ģ��ʵ��һ��strlen()����
//int my_strlen(char* str) // �ַ�ָ��������������� arr �ʹ���ַ�������Ԫ�صĵ�ַ
//{
//	// ��ʱ���� count
//	int count = 0;
//	// ͨ���ƶ�ָ�룬�ж��Ƿ�Ϊ/0
//	while (*str != '\0') 
//	{
//		count++;
//		str++;	// ʹָ��������
//	}
//	return count;
//}

// ��������ʱ������ʵ�� - > �ݹ�ķ���

// my_strlen("nba")
// 1 + my_strlen("ba")
// 1 + 1 + my_strlen("a")
// 1 + 1 + 1 + my_strlen("")
// 1 + 1 + 1 + 0

//int my_strlen(char* str) // �ַ�ָ��������������� arr �ʹ���ַ�������Ԫ�صĵ�ַ
//{
//	if (*str != '\0') 
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//
//int main() 
//{
//	char arr[] = "nba";			// n b a \0
//	//int len = strlen(arr);	// ���ַ�������
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);	// arr�����飬���鴫�Σ�����ȥ����������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//
//	return 0;
//}


// �� n �Ľ׳ˣ������������

// ѭ��
//int factorial(int n) 
//{
//	int i = 0;
//	int res = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		res *= i;
//	}
//	return res;
//}


// �ݹ�ķ�ʽ
// 5 * factorial(4)
// 5 * 4 * factorial(3)
// 5 * 4 * 3 * factorial(2)
// 5 * 4 * 3 * 2 * factorial(1)
//int factorial(int n)
//{
//	if (n == 1) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main() 
//{
//	int n = 0;
//	int res = 0;
//	//1 * 2 * 3
//	scanf("%d", &n);
//	res = factorial(n);
//	printf("%d\n", res);
//	// ����
//	// ѭ�� -���ݹ�
//	// �ݹ� -��ѭ��
//	return 0;
//}


// ��� n ��쳲�������

// 쳲��������� 1 1 2 3 5 8 13 21 34 55

//int count = 0; // ����3���ظ������˶��ٴ�
//int fib(int n) 
//{
//	//if (n == 3) // ����3���ظ������˶��ٴ�
//	//{
//	//	count++;
//	//}
//	if (n <= 2) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

// 50
// 49 48
// 48 47	47 46
// 47 46	46 45	46 45	45 44
// ʹ�õݹ飬�ܶ��ظ��ļ��㣬���ǺܺõĽ�����������㷨

// ʹ�õ���

//int fib(int n) 
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() 
//{
//	int n = 0;
//	int res = 0;
//	scanf("%d", &n);
//	// TDD - ������������
//	res = fib(n);
//	printf("res = %d\n", res);
//	//printf("count = %d\n", count);
//
//	// ��ӡ쳲���������
//	for (int i = 1; i <= n; i++) 
//	{
//		printf("%d ", fib(i));
//	}
//	return 0;
//}


// ��ŵ������
// ������̨������

//int main() 
//{
//	return 0;
//}

