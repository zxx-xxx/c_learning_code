#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	////转置
//	//int tmp[10][10] = { 0 };
//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < m; j++)
//	//	{
//	//		tmp[j][i] = arr[i][j];
//	//	}
//	//}
//	////输出
//	//for (int i = 0; i < m; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		printf("%d ", tmp[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0; int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int ret = 1;
//	if (n == 1)
//		ret = 1;
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i > j)
//				{
//					if (arr[i][j] != 0)
//					{
//						ret = 0;
//						goto end;
//					}
//				}
//			}
//
//		}
//end:
//	}
//	
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int flag1 = 1;//不严格降序有序标志
//	for (i = 0; i <= n-2; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			flag1 = 0;
//			break;
//		}
//	}
//	int flag2 = 1;//不严格升序有序标志
//	for (i = 0; i <= n - 2; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			flag2 = 0;
//			break;
//		}
//	}
//	if (flag1 || flag2)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}

//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;

//typedef struct node
//{
//	int data;
//	struct node* next;
//}* linklist;

//struct node
//{
//	int data;
//	struct node* next;
//};
//typedef struct node* linklist;

//struct node
//{
//	int data;
//	struct node next;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct node));
//	return 0;
//}

//typedef struct
//{
//	int x;
//	int y;
//}point;
//
//int main()
//{
//	point p1 = { 1,1 };
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//
//};
//
//struct s3
//{
//	double d;
//	char c;
//	int i;
//
//};
//
//struct s4
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
//
//#pragma pack(1)
//struct s
//{
//	int i;
//	double d;
//};
//#pragma pack()
//
//int main()
//{
//
//	printf("%d\n", sizeof(struct s));
//
//
//	//printf("%d\n", sizeof(struct s1));
//	//printf("%d\n", sizeof(struct s2));
//	//printf("%d\n", sizeof(struct s3));
//	//printf("%d\n", sizeof(struct s4));
//
//	//printf("%u\n", offsetof(struct s1, c1));
//	//printf("%u\n", offsetof(struct s1, i));
//	//printf("%u\n", offsetof(struct s1, c2));
//
//	//printf("%u\n", offsetof(struct s2, c1));
//	//printf("%u\n", offsetof(struct s2, c2));
//	//printf("%u\n", offsetof(struct s2, i));
//
//	return 0;
//}

//struct s
//{
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct s));
//	return 0;
//}

//typedef struct s
//{
//	int data[1000];
//	int num;
//}s;
//
//void print1(s s)
//{
//	int i = 0;
//	for (i = 0; i < s.num; i++)
//	{
//		printf("%d ", (s.data)[i]);
//	}
//}
//
//void print2(s* ps)
//{
//	int i = 0;
//	for (i = 0; i < ps->num; i++)
//	{
//		printf("%d ", (ps->data)[i]);
//	}
//}
//
//int main()
//{
//	s s = { {1,2,3},3 };
//	print1(s);
//	printf("\n");
//	print2(&s);
//	return 0;
//}