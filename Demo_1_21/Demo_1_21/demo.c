#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	printf("你好啊，世界！");
//	return 0;
//}

//int main() 
//{
//	声明变量 -> 创建变量 -> 向内存申请空间来存放变量
//	char ch = 'A';
//	int age = 22;
//	printf("%c\n", ch);		// %c - 打印字符格式的数据
//	printf("%d\n", age);	// %d - 打印十进制整形格式的数据
//	float weight = 63.2;
//	printf("%f\n", weight);	// %f - 打印浮点型格式的数据
//	double pi = 3.14;
//	printf("%lf\n", pi);	// %lf - 加上lf来打印双精度浮点型
//	return 0;
//}

//int main()
//{
//	// 为什么会有这么多的类型？
//	// 每种类型的大小是怎样的？
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}

// 关于变量-局部变量-全局变量
//int global = 2022;
//
//int main()
//{
//	int local = 2020;
//	int global = 2021;
//	printf("%d", global);
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	// 输入函数
//	// & 取地址，获取num1和num2的地址，把你输入的值赋给它
//	// 因为我们知道，变量声明的时候，就是向内存申请空间来存放变量，所以每个空间都有自己的地址，称内存地址
//	scanf_s("%d%d", &num1, &num2);	// 这里推荐使用scanf()
//	// scanf()在VS中会报错，解决办法：在第一行加上#define _CRT_SECURE_NO_WARNINGS 1，其中scanf_s()是VS自带的
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}


//作用域
// 局部变量 - 作用域是该变量所在的局部范围
// 全局变量 - 作用域是整个工程
//int main()
//{
//	// extern 关键字 -> 声明一下外部的变量，即另一个文件test.c中的全局变量
//	extern int all;
//	printf("%d", all);
//	return 0;
//}



//生命周期
// 变量的声明周期，就是变量什么时候存在，什么时候不存在，好比人一样
// 局部变量 - 程序进入作用域时该局部变量生命周期开始，离开作用域时生命周期结束
// 全局变量 - 整个程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);	// OK
//	}
//	printf("a = %d\n", a);		// Error
//	return 0;
//}


// 关于常量
// - 1. 字面常量
// - 2. const 修饰的常量
// - 3. #define 定义的标识符常量
// - 4. 枚举常量
//int main()
//{
//	// 1. 字面常量，直接写出来的常量
//	100;
//	3.14;
//	// 2. const 修饰的常量，变量的常属性，修饰后该变量不能发生变化了
//	// 又称常变量，不能发生改变的变量，常变量
//	const int num = 4;
//	printf("%d\n", num);
//	// num = 8; // const修饰后的num就不能重新赋值为8了
//	printf("%d\n", num);
//
//}

// 3. #define 定义的标识符常量 最后无需写分号
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

// 4. 枚举常量
// 枚举 - 即一一列举
//		性别：男、女、保密
//		三原色：红、绿、蓝
// 枚举关键字 - enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum InitColor
//{
//	RED,
//	GREEN,
//	BULE
//};
//
//int main() 
//{
//	// 枚举类型是有值的，不可改变
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);	// 0
//	printf("%d\n", FEMALE);	// 1
//	printf("%d\n", SECRET);	// 2
//
//	enum InitColor color = BULE;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BULE);
//	return 0;
//}

// 字符串 + 转义字符 + 注释

//int main()
//{
//	// 字符串如下
//	//"NBA";
//	//"Baidu";
//	//"Byte Dance";
//	//"";
//
//	// 字符串该如何存放呢？ - > 可以是数组，这里使用字节数组
//	char arr1[] = "Alipay";
//	//char arr2[] = { 'N','B','A' };	// 最后需要\0，它是字符串的结束标志，上面的arr1的字符串会自己偷偷加上\0转义字符
//	char arr2[] = { 'N','B','A' ,'\0'};	// \0不作为字符串的内容，计算长度是也不会算上
//	// 上面两种情况，arr1是存放字符串，arr2是存放字符
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	// 关于长度
//	printf("%d\n", strlen(arr1));	//strlen -> string length -> 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

// 转移字符 -> 转变了原来的意思了的字符
//int main()
//{
//	printf("NBA\n"); // \n 不再打印n，而是变成换行
//	// \t 水平制表符
//	printf("C:\test\23\test.c\n"); // 此时输出 C:      est      est.c
//	printf("C:\\test\\23\\test.c\n"); // 此时输出 C:      est      est.c
//
//	// 只输出 单引号
//	printf("%c\n", '\'');
//
//	// 只输出 单个双引号
//	printf("%s\n", "\"");
//
//	// 看看长度
//	printf("%d\n", strlen("C:\test\23\test.c\n"));	//应该为15，结果为14，\23为2个八进制数字
//	// 八进制：23  - > 十进制：2x8^1 + 3x8^0 = 19 然后19就作为ASCII码对应的那个字符，然后19对应的字符是 !!
//	printf("%c\n", '\23');
//	printf("%d\n", strlen("C:\\test\\23\\test.c\n"));	//应该为17
//
//	// \ddd表示1-3个八进制数字
//	// \xdd表示2个十六进制数字  如：\x30
//
//	printf("%c\n", '\x61'); // 十六进制：61 - > 十进制：6x16^1 + 1x16^0 = 97，应该打印字符 a
//
//	return 0;
//}


// 选择语句

//int main() 
//{
//	int input = 0;
//	printf("加入比特？\n");
//	printf("你要好好学习吗？（1/0）\n");
//	scanf("%d", &input);
//	if (input == 1) 
//	{
//		printf("好Offer\n");
//	}
//	else 
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

// 循环语句
// - while
// - for
// - do while

//int main()
//{
//	int line = 1;
//	printf("加入比特\n");
//	while (line <= 20000) 
//	{
//		printf("敲第%d行代码\n", line);
//		line++;
//	}
//	if (line > 20000) 
//	{
//		printf("好Offer\n");
//	}
//	
//	return 0;
//	
//}


// 函数
// f(x) = 2x + 1
// - 自定义函数 -> 自己设计，自己写
// - 库函数 -> 人家写好的
//int add(int num1, int num2) 
//{
//	int result = num1 + num2;
//	return result;
//}
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//
//	sum = add(a, b);
//	printf("sum = %d + %d = %d\n", a, b, sum);
//	return 0;
//}


// 数组

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 定义了一个存放10个整形数字的数组
//	// 在内存申请了一片空间，名字命名为arr，这片空间就存放着1-10
//	// 而且每个位置都有下标，下标从0开始，通过下标可以访问我们需要的元素
//	//char chArr[20];
//	//float floArr[20];
//	//printf("%d\n", arr[4]); // 通过下标访问元素，应该为5
//
//	// 访问全部的内容 -> 生成每个元素的下标，一一访问
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

// 操作符
// - 1. 算术操作符
//		+ - * / % ，即加、减、乘、除（得到商）、取模（得到余数）
// - 2. 移位操作符
//		>> <<	，即右移、左移，移动的是二进制位
// - 3. 位操作符
//		& | ^ ，即与、或、异或
// - 4. 赋值操作符
//		= += -= *= /= &= ^= |= >>= <<=
// - 5. 单目操作符
//		!		逻辑反操作->非
//		-		负值
//		+		正直
//		&		取地址
//		sizeof	操作数的类型长度（以字节为单位）
//		~		对一个数的二进制按位取反
//		--		前置--，后置--，比如i--,--i
//		++		前置++，后置++，比如i++,++i
//		*		间接访问操作符（解引用操作符）
//		(类型)	强制类型转换
// - 6. 关系操作符
//		>
//		>=
//		<
//		<=
//		!=		不等于，测试“不相等”
//		==		等于，测试“相等”
// - 7. 逻辑操作符
//		&&		逻辑与
//		||		逻辑或
// - 8. 条件表达式
//		exp1 ? exp2 : exp3		即如果表达式1为真，那么就执行表达式2，否则执行表达式3
// - 9. 逗号表达式
//		exp1, exp2, exp3, ... expN


// 2. 移位操作符
//int main() 
//{
//	short a = 1;
//	// 整型1占了2个字节，二进制表示为：00000001
//	// 对a进行左移1位，即对其二进制左移1位
//	short b = a << 1;
//	// 对a进行左移2位，即对其二进制左移2位
//	short c = a << 2;
//	printf("%d\n", b); // 此时左移后为：00000010，对应十进制为2，应该打印2
//	printf("%d\n", c); // 此时左移后为：00000100，对应十进制为4，应该打印4
//	return 0;
//}


// 3. 位操作符
//int main()
//{
//	// & 按位与，即按位进行与操作，
//	// | 按位或，即按位进行或操作，
//	// ^ 按位异或，即按位进行异或操作，
//	short a = 3;	// 00000011
//	short b = 5;	// 00000101
//	// 上面的二进制进行与，只有1&1为1，其他为0，就真假命题，且或非
//	// 与完之后为：00000001
//	short c = a & b;// 所以应该打印1
//	// 进行或，那么为：00000111
//	short d = a | b;// 应该打印7
//	// 进行异或
//	// 对应的二进制位相同，操作后则为0
//	// 对应的二进制位相异，操作后则为1
//	// 所以，异或后为：00000110
//	short e = a ^ b;// 应该打印6
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


// 4. 赋值操作符
//int main() 
//{
//	int a = 10;
//	a = 20;		// = 进行赋值，== 进行判断相等
//	a = a + 10;	// 1. 普通写法
//	a += 10;	// 2. 使用+=写法，效果同上
//
//	a = a - 10;
//	a -= 10;
//
//
//	return 0;
//}

// 5. 单目操作符
//int main() 
//{
//	// 真假，真为1，假为0，逻辑反操作 - > 使用！
//	int a = 1;
//	int b = !a;
//	
//	printf("%d\n", b);
//
//	// sizeof 能够获取类型所占空间的大小，单位是字节
//	int c = 10;
//	printf("%d\n", sizeof(c));			// 4
//	printf("%d\n", sizeof(int));		// 4
//	printf("%d\n", sizeof c);			// ? - > 也是4
//	//printf("%d\n", sizeof int);			// 不能这样写
//
//	int arr[10] = { 0 };				// 10个整型元素的数组
//	printf("%d\n", sizeof(arr));		// 应该为40，即10*sizeof(int)=40
//
//	// 那么就可以计算数组的元素个数了
//	// 个数 = 数组总大小/每个元素的大小
//	int count = 0;
//	count = sizeof(arr) / sizeof(arr[0]);
//	printf("count = %d\n", count);
//
//	short d = 0;	// 2个字节, 00000000
//	short e = ~d;	// 进行取反操作
//	printf("%d\n", e);	// 11111111 -> 255，但是输出-1，因为最高位是符号位
//	// 原码、反码、补码
//	// 负数是以补码的形式存储的
//	// 打印的时候是打印原码
//	// 原码->反码：符号位不变，其他全部取反
//	// 反码->补码：在反码的基础上加1就得到补码
//	// 所以e此时为11111111，且为补码，那么减一得到 反码11111110
//	// 然后反码变回原码就是符号位不变，其他取反得到 原码10000001
//	// 所以会打印e的原码10000001，即-1
//
//
//
//	// 关于++ --
//	int f = 10;
//	int g = f++;	// 先使用，再++
//	int g = ++f;	// 先++，再使用
//	// 同理，--也一样
//
//	// 强制类型转换
//	int h = (int)3.14;	//强制将double类型转换成int类型
//	return 0;
//}


// 7. 逻辑操作符
//int main() 
//{
//	// 真 - true  - 非0即可，一般使用1来表示
//	// 假 - false - 0
//	// && - 逻辑与
//	// || - 逻辑或
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int d = 0;
//	int e = a && d;
//	int f = a || d;
//	printf("%d\n", c);
//	printf("%d\n", e);
//	printf("%d\n", f);
//	return 0;
//}

// 8. 条件表达式
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	//if (a > b) 
//	//{
//	//	max = a;
//	//}
//	//else 
//	//{
//	//	max = b;
//	//}
//	printf("%d\n", max);
//	return 0;
//}


// 关键字

//int main()
//{
//	//register int a = 10;	// 把a这个变量放到寄存器中，称为寄存器变量
//	//signed int a = -10;	// 定义有符号的变量，等价于 int a = -10;
//	//unsigned int a = 10;	// 定义无符号的变量
//	//struct				// 结构体关键字
//	//union					// 联合体（共用体）关键字
//	//volatile				// 体现我们C语言段位的关键字-操作系统会讲到
//
//	//typedef				// 类型定义 - 类型重定义
//	typedef unsigned int u_int;	//把unsigned int定义成u_int，以后直接用u_int
//	unsigned int num1 = 1;
//	u_int num2 = 2;
//	return 0;
//}

// static 修饰局部变量->局部变量的生命周期变长
//void test() 
//{
//	//int a = 1;		// -> 2,2,2,2,2 ，a会销毁掉
//	static int a = 1;	// 静态局部变量 -> 2,3,4,5,6， a会累加了，没被销毁掉
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main() 
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

// static 修饰全局变量
// 在test.c中庸static修饰全局变量g_val，现在不能在其他地方使用，改变了作用域，只能在test.c使用
// 即 static 修饰的全局变量，只能在声明的源文件中使用，不能在其他文件中使用
//int main() 
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

// static 修饰函数
// 在test.c中定义了一个add()函数，那么在这里使用，就通过extern先声明这个函数
//extern int add(int, int);
// 此时的使用是和全局变量一样的
// 在test.c中把add()函数加上static关键字，进行测试，还是报错
// 即 static 修饰的函数，也是只能在声明的源文件中使用，不能在其他文件中使用
// 因为static修饰的函数改变了函数的链接属性，外部链接属性就变成了内部链接属性，外部就看不到这个函数了

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

// #define 定义常量和宏，宏->带参数

//#define MAX 100	//定义标识符常量

// 函数的实现
//int max(int x, int y) 
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

// 宏的定义
//#define MAX(X, Y) (X > Y ? X : Y) // 将来 MAX(X, Y)会被替换成(X > Y ? X : Y)

// 宏实现起来比较简单

//int main() 
//{
//	//int a = MAX;
//	// 求两数的较大者
//	int a = 10;
//	int b = 20;
//	int m = 0;
//	// 函数的方式
//	m = max(a, b);
//	printf("max = %d\n", m);
//	// 宏的方式
//	m = MAX(a, b);
//	printf("max = %d\n", m);
//	return 0;
//}

// 关于指针
// 理解指针前，需要先知道写内存相关的知识，所以先来看看内存
// 内存的地址是如何产生的？而且它一个地址的大小又是怎样的？
// 32位/64位，32根地址线/数据线，需要通电，正电1，负电0；64同理
// 00000000 00000000 00000000 00000000		->0
// 00000000 00000000 00000000 00000001		->1
// 00000000 00000000 00000000 00000010		->2
// 00000000 00000000 00000000 00000011		->3
// ........
// ........
// 10000000 00000000 00000000 00000000		->2^32 = 2147483648
// ........
// ........
// 11111111 11111111 11111111 11111111		->2^32 + 2^31 +...+ 2 = 4294967295
// 以上总共就有2^32个地址
// 然后如果你一个地址，即一个空间你只放一个比特（bit）那么最多能放4294967295 + 1个比特
// 即4294967296 bit，转换成我们知道的单位，成为512MB，即0.5G的内存，但是我们现在知道的32位电脑都不止0.5G是吧
// 所以一个地址放一个比特是不合适的，浪费空间
// 那么一个地址放一个字节（Byte）呢？我们知道放一个比特的话是0.5G，那么一个字节有8位，即放8个比特，那么就可以有
// 8 x 0.5G = 4G，即4G的内存，那这样还是可以的



//int main() 
//{
//	int a = 10;
//	// 有一种变量，是用来存放地址的 - > 它就是指针变量
//	int* p = &a; //取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	// 以后可以通过地址找到a
//	*p = 20;	//	解引用操作符/间接访问操作符，对p进行解引用，找到p指向的变量a
//	printf("a = %d\n", a);
//
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'u';
//	printf("ch = %c\n", ch);
//	// 最后，我们可以知道，在32位的机器上，内存最多就32个01序列，所以指针变量的的大小是4个字节，在64位的机器上，就是8个字节了
//
//	printf("指针pc的大小 = %d\n", sizeof(pc));// 此时打印4，即4个字节
//	// 如何打印8字节？我们VS的最上面，Debug旁边，把x86改成x64即可
//
//
//	// 照猫画虎
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("d = %lf\n", d);
//	printf("*pd = %lf\n", *pd);
//	printf("指针pd的大小 = %d\n", sizeof(pd));
//
//	printf("指针char类型的大小 = %d\n", sizeof(char*));
//	printf("指针short类型的大小 = %d\n", sizeof(short*));
//	printf("指针int类型的大小 = %d\n", sizeof(int*));
//	printf("指针double类型的大小 = %d\n", sizeof(double*));
//	return 0; 
//}


// 结构体
// 描述复杂对象
// 名字 + 身高 + 年龄 + 身份证号码 + ....

// 创建一个结构体类型
struct Book
{
	char name[20];	// C语言程序设计
	short price;	// 55
};	//此处分号不可缺少，来结束这个类型的描述

int main()
{
	// 利用结构体类型 - 创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };
	printf("书名：%s\n", b1.name);		// 通过点操作符获取成员 .
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);

	// 关于修改书名，这里因为是字符数组，所以需要用到strcpy()这个函数 - > string copy
	strcpy(b1.name, "C++"); // 第一个参数：目的地址；第二个参数：需要拷贝到目的地址的内容
	printf("修改后的书名：%s\n", b1.name);

	// 结构体类型的指针变量
	struct Book* pb = &b1;
	// 利用pb打印出书名和价格
	printf("利用pb打印出书名和价格\n");
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d元\n", (*pb).price);
	// 这样写是不是很麻烦，那么还有一种写法，就是使用这种箭头操作符 ->
	printf("利用箭头操作符 ->打印出书名和价格\n");
	printf("书名：%s\n", pb->name);		// pb指向b1这个变量，直接指向其成员
	printf("价格：%d元\n", pb->price);

	// 综上
	// .	结构体变量.成员
	// ->	结构体指针->成员
	return 0;
}

