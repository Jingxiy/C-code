#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a,b��ֵ��>");
//	scanf("%d%d",&a,&b);
//	int sum = Add(a,b);
//	printf("sum=%d",sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	strcpy(arr2,arr1);//�ַ�������
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*', 5);//��arr��ǰ����ַ��滻Ϊ*
//	printf("%s\n",arr);
//	return 0;
//}
//������ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������>");
//	scanf("%d%d",&a,&b);
//	int max = get_max(a,b);
//	printf("max=%d",max);
//	return 0;
//}
//void swap1(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = * x;
//	* x =* y;
//	* y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap1(&a, &b);//�����swap1(a,b),����������ֻ��a��b��������ֵ
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
////��ӡ100-200������
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	if (j == n)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ",year);
			count++;
		}
	}
	printf("\n�ܹ���%d",count);
	return 0;
}