#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// C语言是一门结构化的程序设计语言
// 生活中也就这三种结构
// 1. 顺序结构
// 2. 选择结构
// 3. 循环结构


// 分支和循环

//int main()
//{
//	int age = 10;
//	//if (age < 18) 
//	//{
//	//	printf("未成年\n");
//	//}
//
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//}
//	//else 
//	//{
//	//	printf("成年\n");
//	//}
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (18 <= age && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (28 <= age && age < 50)
//	{
//		printf("壮年\n");
//	}
//	else if (50 <= age && age < 90)
//	{
//		printf("老年\n");
//	}
//
//	return 0;
//}


// 代码1
//int test(int condition) 
//{
//	int x = 1;
//	int y = 0;
//	if (condition)
//		return x;
//	return y;
//}

// 代码2
//int test(int condition)
//{
//	int x = 1;
//	int y = 0;
//	if (condition) 
//	{
//		return x;
//	}
//	else 
//	{
//		return y;
//	}
//}

// 综上，肯定代码2好读

//int main() 
//{
//	int num = 4;
//	/*
//	if (num = 5) 
//	{
//		printf("小心判断错了哦！");
//	}
//	*/
//
//	if (5 == num) // 常量和变量比较相等时，先写常量再 == 不容易出错
//	{
//		printf("小心判断错了哦！");
//	}
//	return 0;
//}


// 练习
// 1. 判断一个数是否为奇数？
// 2. 输出1-100之间的奇数

//int main() 
//{
//	/*int i = 5;
//	if (i % 2 == 1) 
//	{
//		printf("%d是奇数\n", i);
//	}*/
//	
//	int i = 1;
//
//	//while (i <= 100) 
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d是奇数\n", i);
//	//	}
//	//	i++;
//	//}
//
//	while (i <= 100)
//	{
//		printf("%d是奇数\n", i);
//		i += 2;
//	}
//
//	return 0;
//}


// switch语句，实现多分支

//int main() 
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:
//		break;
//	}*/
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		break;
//	}
//}


// 练习，看下面的程序，最后输出什么？
//int main() 
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;		// n = 1 m = 3 
//	case 2: n++;		// n = 2 
//	case 3: 
//		switch (n)		// n = 2
//		{
//		case 1: n++;
//		case 2:			
//			m++;		// n = 2 m = 4
//			n++;		// n = 3
//			break;
//		default:
//			break;
//		}
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n); //应该输出m = 4，n = 3
//	return 0;
//}

// while循环语句

// 打印出1-10
//int main() 
//{
//	int i = 1;
//	while (i <= 10) 
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

// 打印出1-10
//int main()
//{
//	int i = 1;
//	// 如果有break
//	//while (i <= 10)
//	//{
//	//	if (i == 5) 
//	//	{
//	//		break;		// 永久终止循环
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	// 如果有continue
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		continue;	// 这里会死循环，因为i一直都是5
//	//		// continue作用，就是继续，继续就会终止本次循环，也就是说后面的代码就不会执行，会跳到while语句的判断部分，进入下一次循环
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	while (i <= 10)
//	{
//		
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//
//	}
//	return 0;
//}


// 代码1

//int main() 
//{
//	//getchar()	// 字符的输入
//	//putchar()	// 字符的输出
//	int ch = 0;
//	// Ctrl + Z 组合键可以退出该循环，实际上，EOF - end of file -> 是-1
//	while ((ch = getchar()) != EOF) 
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main() 
//{
//	int res = 0;
//	char password[20] = { 0 };
//	char ch;
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认（Y/N）：>");
//	// 读完输入缓冲区的 \n，即清空缓冲区
//	//getchar(); //不完善，搞个循环一直读，读完整个缓冲区
//	while ((ch = getchar()) != '\n') 
//	{
//		
//	}
//	res = getchar();
//	if (res == 'Y') 
//	{
//		printf("确认成功\n");
//	}
//	else 
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


// 代码2
//int main() 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) 
//	{
//		if (ch < '0' || ch>'9') 
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

// for循环
// 有了while循环，为什么还要for循环？ -> 可知while适合知道范围的那种，for适合不知道范围的那种
// 同时，更加直观，方便我们看，初始，判断，调整都写在一行
// for(表达式1;表达式2;表达式3)
// {
//		循环语句;
// }
// 表达式1：初始化部分
// 表达式2：条件判断部分
// 表达式3：调整部分

// 打印1-10
//int main() 
//{
//	int i = 0;
//	//  初始	判断	调整
//	for (i = 1; i <= 10; i++) 
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// 加上break;
//int main()
//{
//	int i = 0;
//	//  初始	判断	调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5) 
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


// 加上continue;
//int main()
//{
//	int i = 0;
//	//  初始	判断	调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;	// 在while那边会死循环，在这边不会死循环，因为最后会执行i++
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


// for循环的循环控制变量推荐使用前闭后开的写法
//int main() 
//{
//	int i;
//	//   前闭	后开
//	for (i = 0; i < 10; i++) //这样比较有意义，10可以看出：10个元素，10次打印，10次循环
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main() 
//{
//	// 死循环
//	for (;;) 
//	{
//		printf("哈哈哈哈哈\n");
//	}
//	// for循环的初始化部分、判断部分和调整部分都可以省略
//	// 其中，for循环的判断部分如果被省略，那判断条件就是：恒为真
//}


// 下面循环几次？
//int main() 
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) // 这里判断部分是k = 0，0为假，根本不进入循环
//	{
//		k++;
//	}
//	return 0;
//}

// do...while()循环

//int main() 
//{
//	int i = 1;
//	do 
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


// 加上break;
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5) 
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


// 加上continue;
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;		// 打印1,2,3,4 然后死循环（光标闪烁），所以do...while和while相似，不过一上来就会先执行一次
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

// 练习
// 1. 计算n的阶乘。
// 2. 计算1!+ 2!+ 3!+ ... + 10!
// 3. 在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n);

// 4. 编写代码，演示多个字符从两端移动，向中间汇聚。
// 5. 编写代码，模拟用户登录情景，并且只能登录3次。（即只允许输入三次密码；成功进行提示，3次均失败则退出程序。）

//int main() 
//{
//	int i;
//	int n;
//	printf("请输入要计算的阶乘 n ：>");
//	scanf("%d", &n);
//	int factorial = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		factorial *= i;
//	}
//	printf("%d的阶乘：> %d", n, factorial);
//	return 0;
//}


//int main()
//{
//	int i, j;
//	int n;
//	int factorial = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 3; i++) 
//	{
//		factorial = 1;// 这样才正确
//		for (j = 1; j <= i; j++)
//		{
//			factorial *= j;
//		}
//		sum += factorial;
//
//	}
//	
//	printf("阶乘 1! + 2! + 3!：> %d", sum);
//	return 0;
//}

// 进行优化
//int main()
//{
//	int i, j;
//	int n;
//	int factorial = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 3; i++)
//	{
//		// i = 1; factorial = 1*1 = 1; sum = 0+1
//		// i = 2; factorial = 1*2 = 2; sum = 1+2
//		// i = 3; factorial = 2*3 = 6; sum = 3+6
//		factorial *= i;
//		sum += factorial;
//	}
//
//	printf("阶乘 1! + 2! + 3! =  %d", sum);
//	return 0;
//}


//int normalsearch(int v[], int n) 
//{
//	int i = 0;
//	int count = sizeof(v) / sizeof(v[0]);
//	for (i = 0; i < count; i++)
//	{
//		if (n == v[i])
//		{
//			printf("找到了%d，位置是arr[%d]", n, i);
//			break;
//		}
//	}
//	if (i == count)
//	{
//		printf("找不到\n");
//	}
//	return n;
//}


//int binsearch(int x, int arr[], int n) 
//{
//	
//}
//
//
//
//int main() 
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int k = 7;
//	// 进行查找7
//
//	/*int i = 0;
//	int count = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < count; i++) 
//	{
//		if (k == arr[i]) 
//		{
//			printf("找到了%d，位置是arr[%d]", k, i);
//			break;
//		}
//	}
//	if (i == count) 
//	{
//		printf("找不到\n");
//	}*/
//
//
//	// 使用二分查找（折半查找）
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int count = sizeof(arr) / sizeof(arr[0]); // 计算元素个数
//	int left = 0; // 左下标
//	int right = count - 1; // 右下标
//
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}


//int main() 
//{
//	// welcome to guangzhou!!!
//	// #######################
//	// w#####################!
//	// we###################!!
//	// wel#################!!!
//	// ...
//	// welcome to guangzhou!!!
//	char arr1[] = "welcome to guangzhou!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;	// 错误的写法 最后还有个\0，也会算进去，所以再减1个，即减2
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;	// 正确的写法
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		// 休息0.25秒		// 头文件	windows.h
//		Sleep(250);	
//		// 清空一下屏幕
//		if (left < right)	// 最后一次不会清屏
//		{
//			system("cls");	//执行系统命令的一个函数 -> cls 清空屏幕	头文件	stdlib.h
//		}
//		left++;
//		right--;
//	}
//	
//	return 0;
//}


//int main() 
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) 
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) // == 不能用来比较两个字符串是否相等，应该使用库函数 - strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else 
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3) 
//	{
//		printf("3次密码均错误，将退出程序\n");
//	}
//	return 0;
//}


// 练习

// 从大到小输出三个值
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	// 算法实现，a放最大值，b放中间值，c放最小值
//	if (a < b) 
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c) 
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c) 
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

// 打印1-100之间所有3的倍数的数字，即打印3的倍数的数

//int main() 
//{
//
//	//int i = 1;
//	//int num = 0;
//	//while (1) 
//	//{
//	//	num = 3 * i;
//	//	if (num < 100) 
//	//	{
//	//		printf("%d ", num);
//	//	}
//	//	i++;
//	//}
//
//	int i = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		if (i % 3 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 给两个数，求最大公约数 - 辗转相除法

//int main() 
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//
//	while (r = m % n) //while (m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


// 打印1000到2050之间的闰年

//int main() 
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2050; year++) 
//	{
//		// 判断闰年的规则
//		// 能被4整除并且不能被100整除是闰年
//		// 能被400整除是闰年
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


// 打印素数，100-200之间

//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		// 试除法
//		// 比如i = 5，那么就要分别看2，3，4，5 能不能被整除
//		// 2不能被5整除，接下来看3
//		// 3不能被5整除，接下来看4
//		// 4不能被5整除，接下来看5
//		// 5刚好被自身整除，所以是素数
//		// 因为 i 是从 100 到 200 ，所以接下来，需要产生 2 到 i-1 ，进行判断
//		int j = 2;
//		for (j = 2; j < i; j++) 
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i) 
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d ", count);
//	
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 优化的方法
//		// 如果一个数 i 可以写成 i = a * b 这种形式，比如 16 = 2 * 8 = 4 * 4
//		// 那么这个数肯定不是素数，也就是说，如果我们能找到 i 的某个因子，比如找到2，那么就可以判断这个不是素数
//		// 再来看看，比如 因子 2， 那么2是小于或等于16开平方，即根号16的
//		// 也就是说，a 和 b中至少有一个数字是 小于或等于 i 开平方的
//		// 这样就不需要一个一个数除到16那里了，看能不能除了
//		int j = 2;
//		// sqrt() 开平方 - 库函数 引入 math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d ", count);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	//然后偶数肯定不是素数
//	for (i = 100; i <= 200; i++)
//	{
//		// 优化的方法
//		// 如果一个数 i 可以写成 i = a * b 这种形式，比如 16 = 2 * 8 = 4 * 4
//		// 那么这个数肯定不是素数，也就是说，如果我们能找到 i 的某个因子，比如找到2，那么就可以判断这个不是素数
//		// 再来看看，比如 因子 2， 那么2是小于或等于16开平方，即根号16的
//		// 也就是说，a 和 b中至少有一个数字是 小于或等于 i 开平方的
//		// 这样就不需要一个一个数除到16那里了，看能不能除了
//		int j = 2;
//		// sqrt() 开平方 - 库函数 引入 math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d ", count);
//
//	return 0;
//}


// 数一下1-100中有9的数，计算出现多少个9，应该有20个
//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		if (i % 10 == 9) 
//		{
//			//printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9) 
//		{
//			//printf("%d ", i);
//			count++;  
//		}
//	}
//	printf("count = %d ", count);
//	return 0;
//}

// 分数求和，计算1/1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100

//int main() 
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) 
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;			// 控制加减交替
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}


// 求10个整数中的最大值

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];	// 把第一个认为是最大值
//	for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) 
//	{
//		if (arr[i] > max) 
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


// 输出乘法口诀表
//int main() 
//{
//	int i = 0;
//	int j = 0;
//	// 打印9行
//	for (i = 1; i <= 9; i++) 
//	{
//		// 打印1行里面的信息，第i行里面有i项，通过i来控制
//		for (j = 1; j <= i; j++) 
//		{
//			//printf("%d x %d = %d\t", i, j, i * j);
//			//printf("%d x %d = %2d   ", i, j, i * j);	// %2d 打印两位，不够两位就空格补充
//			printf("%d x %d = %-2d   ", i, j, i * j);	// %-2d 打印两位，往前补充
//		}
//		printf("\n");
//	}
//	return 0;
//}



// 猜数字游戏，自动生成随机数，然后进行猜测

//void menu() 
//{
//	printf("----------------------\n");
//	printf("------1.开始游戏------\n");
//	printf("------0.结束游戏------\n");
//	printf("----------------------\n");
//}
//
//void game() 
//{
//	printf("\n猜数字\n");
//	int num = 0;
//	// 1. 生成随机数
//	//		- 需要引入 stdlib.h -> 生成0-32767之间  需要srand()，设置一个随机起点
//	int random = 0;
//	//srand(1);			// srand需要一个随机变量 - 但我们就是要生成随机数，结果你说我们需要一个随机数来作为参数，所以怎么办？
//						// 时间时刻变化，那么就有一个东西 ------> 时间戳：当前时间与1970-1-1-0:0:0的差值 (秒)
//						// C语言如何获取时间戳？ 需要用到 time()函数 又time()是 time_t类型的，查看源码可知， time_t就是long类型重定义命名过来的
//						// 需要引入 time.h
//						// 不够随机，伪随机 ----> 不要放这里，放主函数
//	//srand((unsigned int)time(NULL));
//	random = rand()%100 + 1;	// 模上100，那么32767最后的余数就无非是0-99的数，所以再加上1，就是1-100
//	// 
//	printf("你猜的数是：>");
//	while (num != random) 
//	{
//		scanf("%d", &num);
//		if (num > random)
//		{
//			printf("\n猜大了~\n");
//		}
//		else if(num < random)
//		{
//			printf("\n猜小了~\n");
//		}
//	}
//	if (num == random) 
//	{
//		printf("\n猜对了~，就是%d\n", random);
//	}
//}
//
//int main() 
//{
//	int input;
//	
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("\n请选择：> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n已退出游戏\n");
//			break;
//		default:
//			printf("\n选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



