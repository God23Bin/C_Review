#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// C������һ�Žṹ���ĳ����������
// ������Ҳ�������ֽṹ
// 1. ˳��ṹ
// 2. ѡ��ṹ
// 3. ѭ���ṹ


// ��֧��ѭ��

//int main()
//{
//	int age = 10;
//	//if (age < 18) 
//	//{
//	//	printf("δ����\n");
//	//}
//
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//}
//	//else 
//	//{
//	//	printf("����\n");
//	//}
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (18 <= age && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (28 <= age && age < 50)
//	{
//		printf("׳��\n");
//	}
//	else if (50 <= age && age < 90)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}


// ����1
//int test(int condition) 
//{
//	int x = 1;
//	int y = 0;
//	if (condition)
//		return x;
//	return y;
//}

// ����2
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

// ���ϣ��϶�����2�ö�

//int main() 
//{
//	int num = 4;
//	/*
//	if (num = 5) 
//	{
//		printf("С���жϴ���Ŷ��");
//	}
//	*/
//
//	if (5 == num) // �����ͱ����Ƚ����ʱ����д������ == �����׳���
//	{
//		printf("С���жϴ���Ŷ��");
//	}
//	return 0;
//}


// ��ϰ
// 1. �ж�һ�����Ƿ�Ϊ������
// 2. ���1-100֮�������

//int main() 
//{
//	/*int i = 5;
//	if (i % 2 == 1) 
//	{
//		printf("%d������\n", i);
//	}*/
//	
//	int i = 1;
//
//	//while (i <= 100) 
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d������\n", i);
//	//	}
//	//	i++;
//	//}
//
//	while (i <= 100)
//	{
//		printf("%d������\n", i);
//		i += 2;
//	}
//
//	return 0;
//}


// switch��䣬ʵ�ֶ��֧

//int main() 
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		break;
//	}
//}


// ��ϰ��������ĳ���������ʲô��
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
//	printf("m = %d, n = %d\n", m, n); //Ӧ�����m = 4��n = 3
//	return 0;
//}

// whileѭ�����

// ��ӡ��1-10
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

// ��ӡ��1-10
//int main()
//{
//	int i = 1;
//	// �����break
//	//while (i <= 10)
//	//{
//	//	if (i == 5) 
//	//	{
//	//		break;		// ������ֹѭ��
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	// �����continue
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		continue;	// �������ѭ������Ϊiһֱ����5
//	//		// continue���ã����Ǽ����������ͻ���ֹ����ѭ����Ҳ����˵����Ĵ���Ͳ���ִ�У�������while�����жϲ��֣�������һ��ѭ��
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


// ����1

//int main() 
//{
//	//getchar()	// �ַ�������
//	//putchar()	// �ַ������
//	int ch = 0;
//	// Ctrl + Z ��ϼ������˳���ѭ����ʵ���ϣ�EOF - end of file -> ��-1
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
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N����>");
//	// �������뻺������ \n������ջ�����
//	//getchar(); //�����ƣ����ѭ��һֱ������������������
//	while ((ch = getchar()) != '\n') 
//	{
//		
//	}
//	res = getchar();
//	if (res == 'Y') 
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


// ����2
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

// forѭ��
// ����whileѭ����Ϊʲô��Ҫforѭ���� -> ��֪while�ʺ�֪����Χ�����֣�for�ʺϲ�֪����Χ������
// ͬʱ������ֱ�ۣ��������ǿ�����ʼ���жϣ�������д��һ��
// for(���ʽ1;���ʽ2;���ʽ3)
// {
//		ѭ�����;
// }
// ���ʽ1����ʼ������
// ���ʽ2�������жϲ���
// ���ʽ3����������

// ��ӡ1-10
//int main() 
//{
//	int i = 0;
//	//  ��ʼ	�ж�	����
//	for (i = 1; i <= 10; i++) 
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// ����break;
//int main()
//{
//	int i = 0;
//	//  ��ʼ	�ж�	����
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


// ����continue;
//int main()
//{
//	int i = 0;
//	//  ��ʼ	�ж�	����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;	// ��while�Ǳ߻���ѭ��������߲�����ѭ������Ϊ����ִ��i++
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


// forѭ����ѭ�����Ʊ����Ƽ�ʹ��ǰ�պ󿪵�д��
//int main() 
//{
//	int i;
//	//   ǰ��	��
//	for (i = 0; i < 10; i++) //�����Ƚ������壬10���Կ�����10��Ԫ�أ�10�δ�ӡ��10��ѭ��
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main() 
//{
//	// ��ѭ��
//	for (;;) 
//	{
//		printf("����������\n");
//	}
//	// forѭ���ĳ�ʼ�����֡��жϲ��ֺ͵������ֶ�����ʡ��
//	// ���У�forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
//}


// ����ѭ�����Σ�
//int main() 
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) // �����жϲ�����k = 0��0Ϊ�٣�����������ѭ��
//	{
//		k++;
//	}
//	return 0;
//}

// do...while()ѭ��

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


// ����break;
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


// ����continue;
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;		// ��ӡ1,2,3,4 Ȼ����ѭ���������˸��������do...while��while���ƣ�����һ�����ͻ���ִ��һ��
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

// ��ϰ
// 1. ����n�Ľ׳ˡ�
// 2. ����1!+ 2!+ 3!+ ... + 10!
// 3. ��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v[], int n);

// 4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
// 5. ��д���룬ģ���û���¼�龰������ֻ�ܵ�¼3�Ρ�����ֻ���������������룻�ɹ�������ʾ��3�ξ�ʧ�����˳����򡣣�

//int main() 
//{
//	int i;
//	int n;
//	printf("������Ҫ����Ľ׳� n ��>");
//	scanf("%d", &n);
//	int factorial = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		factorial *= i;
//	}
//	printf("%d�Ľ׳ˣ�> %d", n, factorial);
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
//		factorial = 1;// ��������ȷ
//		for (j = 1; j <= i; j++)
//		{
//			factorial *= j;
//		}
//		sum += factorial;
//
//	}
//	
//	printf("�׳� 1! + 2! + 3!��> %d", sum);
//	return 0;
//}

// �����Ż�
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
//	printf("�׳� 1! + 2! + 3! =  %d", sum);
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
//			printf("�ҵ���%d��λ����arr[%d]", n, i);
//			break;
//		}
//	}
//	if (i == count)
//	{
//		printf("�Ҳ���\n");
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
//	// ���в���7
//
//	/*int i = 0;
//	int count = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < count; i++) 
//	{
//		if (k == arr[i]) 
//		{
//			printf("�ҵ���%d��λ����arr[%d]", k, i);
//			break;
//		}
//	}
//	if (i == count) 
//	{
//		printf("�Ҳ���\n");
//	}*/
//
//
//	// ʹ�ö��ֲ��ң��۰���ң�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int count = sizeof(arr) / sizeof(arr[0]); // ����Ԫ�ظ���
//	int left = 0; // ���±�
//	int right = count - 1; // ���±�
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//		printf("�Ҳ�����\n");
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
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;	// �����д�� ����и�\0��Ҳ�����ȥ�������ټ�1��������2
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;	// ��ȷ��д��
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		// ��Ϣ0.25��		// ͷ�ļ�	windows.h
//		Sleep(250);	
//		// ���һ����Ļ
//		if (left < right)	// ���һ�β�������
//		{
//			system("cls");	//ִ��ϵͳ�����һ������ -> cls �����Ļ	ͷ�ļ�	stdlib.h
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
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) // == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯�� - strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else 
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3) 
//	{
//		printf("3����������󣬽��˳�����\n");
//	}
//	return 0;
//}


// ��ϰ

// �Ӵ�С�������ֵ
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	// �㷨ʵ�֣�a�����ֵ��b���м�ֵ��c����Сֵ
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

// ��ӡ1-100֮������3�ı��������֣�����ӡ3�ı�������

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

// ���������������Լ�� - շת�����

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


// ��ӡ1000��2050֮�������

//int main() 
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2050; year++) 
//	{
//		// �ж�����Ĺ���
//		// �ܱ�4�������Ҳ��ܱ�100����������
//		// �ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


// ��ӡ������100-200֮��

//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		// �Գ���
//		// ����i = 5����ô��Ҫ�ֱ�2��3��4��5 �ܲ��ܱ�����
//		// 2���ܱ�5��������������3
//		// 3���ܱ�5��������������4
//		// 4���ܱ�5��������������5
//		// 5�պñ���������������������
//		// ��Ϊ i �Ǵ� 100 �� 200 �����Խ���������Ҫ���� 2 �� i-1 �������ж�
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
//		// �Ż��ķ���
//		// ���һ���� i ����д�� i = a * b ������ʽ������ 16 = 2 * 8 = 4 * 4
//		// ��ô������϶�����������Ҳ����˵������������ҵ� i ��ĳ�����ӣ������ҵ�2����ô�Ϳ����ж������������
//		// �������������� ���� 2�� ��ô2��С�ڻ����16��ƽ����������16��
//		// Ҳ����˵��a �� b��������һ�������� С�ڻ���� i ��ƽ����
//		// �����Ͳ���Ҫһ��һ��������16�����ˣ����ܲ��ܳ���
//		int j = 2;
//		// sqrt() ��ƽ�� - �⺯�� ���� math.h
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
//	//Ȼ��ż���϶���������
//	for (i = 100; i <= 200; i++)
//	{
//		// �Ż��ķ���
//		// ���һ���� i ����д�� i = a * b ������ʽ������ 16 = 2 * 8 = 4 * 4
//		// ��ô������϶�����������Ҳ����˵������������ҵ� i ��ĳ�����ӣ������ҵ�2����ô�Ϳ����ж������������
//		// �������������� ���� 2�� ��ô2��С�ڻ����16��ƽ����������16��
//		// Ҳ����˵��a �� b��������һ�������� С�ڻ���� i ��ƽ����
//		// �����Ͳ���Ҫһ��һ��������16�����ˣ����ܲ��ܳ���
//		int j = 2;
//		// sqrt() ��ƽ�� - �⺯�� ���� math.h
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


// ��һ��1-100����9������������ֶ��ٸ�9��Ӧ����20��
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

// ������ͣ�����1/1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100

//int main() 
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) 
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;			// ���ƼӼ�����
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}


// ��10�������е����ֵ

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];	// �ѵ�һ����Ϊ�����ֵ
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


// ����˷��ھ���
//int main() 
//{
//	int i = 0;
//	int j = 0;
//	// ��ӡ9��
//	for (i = 1; i <= 9; i++) 
//	{
//		// ��ӡ1���������Ϣ����i��������i�ͨ��i������
//		for (j = 1; j <= i; j++) 
//		{
//			//printf("%d x %d = %d\t", i, j, i * j);
//			//printf("%d x %d = %2d   ", i, j, i * j);	// %2d ��ӡ��λ��������λ�Ϳո񲹳�
//			printf("%d x %d = %-2d   ", i, j, i * j);	// %-2d ��ӡ��λ����ǰ����
//		}
//		printf("\n");
//	}
//	return 0;
//}



// ��������Ϸ���Զ������������Ȼ����в²�

//void menu() 
//{
//	printf("----------------------\n");
//	printf("------1.��ʼ��Ϸ------\n");
//	printf("------0.������Ϸ------\n");
//	printf("----------------------\n");
//}
//
//void game() 
//{
//	printf("\n������\n");
//	int num = 0;
//	// 1. ���������
//	//		- ��Ҫ���� stdlib.h -> ����0-32767֮��  ��Ҫsrand()������һ��������
//	int random = 0;
//	//srand(1);			// srand��Ҫһ��������� - �����Ǿ���Ҫ����������������˵������Ҫһ�����������Ϊ������������ô�죿
//						// ʱ��ʱ�̱仯����ô����һ������ ------> ʱ�������ǰʱ����1970-1-1-0:0:0�Ĳ�ֵ (��)
//						// C������λ�ȡʱ����� ��Ҫ�õ� time()���� ��time()�� time_t���͵ģ��鿴Դ���֪�� time_t����long�����ض�������������
//						// ��Ҫ���� time.h
//						// ���������α��� ----> ��Ҫ�������������
//	//srand((unsigned int)time(NULL));
//	random = rand()%100 + 1;	// ģ��100����ô32767�����������޷���0-99�����������ټ���1������1-100
//	// 
//	printf("��µ����ǣ�>");
//	while (num != random) 
//	{
//		scanf("%d", &num);
//		if (num > random)
//		{
//			printf("\n�´���~\n");
//		}
//		else if(num < random)
//		{
//			printf("\n��С��~\n");
//		}
//	}
//	if (num == random) 
//	{
//		printf("\n�¶���~������%d\n", random);
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
//		printf("\n��ѡ��> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n���˳���Ϸ\n");
//			break;
//		default:
//			printf("\nѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



