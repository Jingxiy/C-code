#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float x, y;
//	printf("������x:\n");
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
////n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;
//	printf("����һ����\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		res = res * i;
//	}
//	printf("�׳�Ϊ:%d\n",res);
//	return 0;
//}
//����1��+2��+3��+4��+.....n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;
//	int sum = 0;
//	int m = 0;
//	printf("����һ������\n");
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
//�������в���һ����
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
//			printf("�ҵ��ˣ��±꣺%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//���ַ�����
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
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s",passward);
//		if (strcmp(passward, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("�������, �˳�����\n");
//	return 0;
//}
int main()
{
	int ret = 0;
	int ch = 0;
	char passward[20] = {0};
	printf("���������룺>\n");
	scanf("%s",passward);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret =='Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}