#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
////将三个数从小到大排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n",a,b,c );
//	return 0;
//}
////求两个数的最大公因数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d",n);
//	return 0;
//}
////打印闰年
//int main()
//{
//	int count = 0;
//	int year1 = 0;
//	int year2 = 0;
//	int y = 0;
//	scanf("%d%d", &year1, &year2);
//	if (year1 < year2)
//	{
//		for (y = year1; y <= year2; y++)
//		{
//			if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			{
//				printf("%d ",y);
//				count++;
//			}
//		}
//		printf("%d ",count);
//	}
//	else
//	{
//		printf("请按从小到大的顺序输入！");
//	}
//	return 0;
//}
////打印素数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	scanf("%d%d",&a,&b);
//	if (a % 2 == 0)
//	{
//		a += 1;
//	}
//	for (i = a; i <= b; i += 2)
//	{
//		//for (j = 2; j <= i; j++)
//		for (j = 2; j < i; j++)
//		{
//			//if ((i % j == 0)&&(i!=j))
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	    //}
//	}
//	printf("\n%d",count);
//	return 0;
//}
// //数9的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n%d",count);
//	return 0;
//}
////计算1/1-1/2=1/3-1/4......+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int c = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//		c = -c;
//	}
//	printf("sum=%lf",sum);
//	return 0;
//}
////求十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d",max);
//	return 0;
//}
////打印乘法口诀
//int main()
//{
//	int i = 0;
//	//打印行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}