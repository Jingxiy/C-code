#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	right = sz - 1;
//	while (left <=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left = right)
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[1]);
//	int ret = binary_search(arr,k,sz);
//	if (ret)
//	{
//		printf("�ҵ���\n");
//		printf("�±�Ϊ%d ", ret);
//	}
//	else
//		printf("δ�ҵ�\n");
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//		printf("num=%d\n",num);
//		Add(&num);
//		printf("num=%d",num);
//		return 0;
//}
#include"test.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("��������������>");
//	scanf("%d%d",&a,&b);
//	sum = Add(a,b);
//	printf("sum=%d",sum);
//	return 0;
//}
// ��strlen��ʵ��
//int main()
//{
//	char arr[] = "bitbbbb";
//	int len = 0;
//	len = my_strlen(arr);
//	printf("len=%d",len);
//	return 0;
//}
//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������n��>");
//	scanf("%d",&n);
//	//ret = Fac1(n);
//	ret = Fac2(n);
//	printf("ret=%d",ret);
//}
//쳲���������
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("ret=%d",ret);
	return 0;
}