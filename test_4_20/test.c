#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	//EOF;
//	//printf("%d\n", 'a');
//	//printf("%d\n", abs(-2));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k < i + 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k < n - i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < 2*n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < abs(n - i); j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k < n + 1- abs(n - i); k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}