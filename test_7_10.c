#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float x, y;
//	printf("输入数x:\n");
//	scanf("%f", &x);
//	if (x <= 1)
//	{
//		y = x;
//
//	}
//	else
//	{
//		if (x > 1 && x < 10)
//		{
//			y = 2 * x - 1;
//		}
//		else
//		{
//			y = 3 * x - 1;
//		}
//	}
//	printf("y=%f\n", y);
//	return 0;
//}
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2); 
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//
//}
////n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;
//	printf("输入一个数\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		res = res * i;
//	}
//	printf("阶乘为:%d\n",res);
//	return 0;
//}
//计算1！+2！+3！+4！+.....n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;
//	int sum = 0;
//	int m = 0;
//	printf("输入一个数：\n");
//	scanf("%d", &m);
//	for (n = 1; n <= m; n++)
//	{
//		res = 1;
//		for (i = 1; i <= n; i++)
//		{
//			res = res * i;
//		}
//		sum = sum + res;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//
//}
//在数组中查找一个数
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 12;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//二分法查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 ,11};
//	int k=12;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid-1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s",passward);
//		if (strcmp(passward, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("密码错误, 退出程序\n");
//	return 0;
//}
int main()
{
	int ret = 0;
	int ch = 0;
	char passward[20] = {0};
	printf("请输入密码：>\n");
	scanf("%s",passward);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret =='Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}