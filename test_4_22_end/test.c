#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int fab(int i)
//{
//	if (i == 1)
//		return 0;
//	else if (i == 2)
//		return 1;
//	else
//	{
//		return (fab(i - 1) + fab(i - 2));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = fab(i); 
//	int tmp = 0;
//	while (ret < n)
//	{
//		tmp = ret;
//		i++;
//		ret = fab(i);
//	}
//	int step = ((n - tmp) > (ret - n) ? (ret - n) : (n - tmp));
//	printf("%d\n", step);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int step = -1;
//	if (n == 0)
//		step = 0;
//	else if (n == 1)
//		step = 0;
//	else
//	{
//		int a = 0;
//		int b = 1;
//		int c = a + b;
//		while (c < n)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//		}
//		step = ((n - b) > (c - n) ? (c - n) : (n - b));
//	}
//	printf("%d\n", step);
//	return 0;
//}

//void substitute(char arr[])
//{
//	assert(arr);
//	char* tokens[50] = { 0 };
//	int i = 0;
//	for (tokens[i] = strtok(arr, " "); tokens[i] != NULL; tokens[i] = strtok(NULL, " "))
//	{
//		i++;
//	}
//	char str[50][50] = { 0 };
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		strcpy(str[j], tokens[j]);
//	}
//	int k = 0;
//	for (k = 0; k < i - 1; k++)
//	{
//		strcat(tokens[0], "%20");
//		strcat(tokens[0], str[k+1]);
//
//	}
//	return;
//}
//

//void substitute(char arr[])
//{
//	assert(arr);
//	char* str = arr;
//	while (*str != '\0')
//	{
//		while (*str != ' ')
//		{
//			str++;
//			if (*str == '\0')
//				return;
//
//		}
//		char* tmp = str;
//		while (*str != '\0')
//			str++;
//		while (str > tmp)
//		{
//			*(str + 2) = *str;
//			str--;
//		}
//		*str = '%';
//		*(++str) = '2';
//		*(++str) = '0';
//		str++;
//
//
//	}
//
//}

//void substitute(char* str,int length)
//{
//	assert(str);
//	char* tmp = str;
//	int count = 0;
//	while (*str != '\0')
//	{
//		if (*str == ' ')
//		{
//			count++;
//			str++;
//		}
//		else
//			str++;
//	}
//	while (str >= tmp)
//	//while (count > 0)
//	{
//		*(str + 2 * count) = *str;
//		str--;
//		if (*str == ' ')
//		{
//			*(str + 2 * count) = '0';
//			*(str + 2 * count - 1) = '2';
//			*(str + 2 * count - 2) = '%';
//			str--; count--;
//		}
//	}
//}
//
//int main()
//{
//	char arr[50] = " we are happy.";
//	int length = strlen(arr);
//	substitute(arr,length);
//	printf("%s\n", arr);
//	return 0;
//}

//typedef unsigned int uint;
////extern int global;
//#include "test.h"
//int main()
//{
//	//printf("%c\n", '\a');
//	//printf("hello world\b \n");
//	//while (1);
//	//printf("\vhello world\n");
//	//printf("hello world\rhi\n");
//	//printf("hello world\n");
//	//printf("\fhello world\n");
//
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	int a = 0x11;
//	printf("%d\n", a);
//	return 0;
//}