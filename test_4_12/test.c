#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//void getmemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test()
//{
//	char* str = NULL;
//	getmemory(&str, 100);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str); str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int Min(int x, int y)
//{
//	return (x < y ? x : y);
//}

//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int a = n; int b = m;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int r = 0;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	int max = b;
//	int min = n * m / max;
//	printf("%d\n", min + max);
//	return 0;
//}

//int Max(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//	{
//		return Max(b, a % b);
//	}
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int a = n; int b = m;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int max = Max(a, b);
//	int min = n * m / max;
//
//	printf("%d\n", min + max);
//	return 0;
//}

//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int a = n; int b = m;
//	int r = 0;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	int max = b;
//	int min = n * m / max;
//	printf("%d\n", min + max);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < input; i++)
//		{
//			int j = 0;
//			if (i == 0 || i == input - 1)
//			{
//				for (j = 0; j < input; j++)
//				{
//					printf("* ");
//				}
//			}
//			else
//			{
//				for (j = 0; j < input; j++)
//				{
//					if(j == 0||j == input-1)
//						printf("* ");
//					else
//					{
//						printf("  ");
//					}
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

