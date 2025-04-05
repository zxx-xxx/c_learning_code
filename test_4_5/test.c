#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>



//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = 0;
//	int i = 0;
//
//	while (input)
//	{
//		
//		if ((input % 10) % 2 == 0)
//		{
//			ret = ret + 0 * (int)pow(10, i);
//		}
//		else
//		{
//			ret = ret + 1 * (int)pow(10, i);
//
//		}
//		input = input / 10;
//		i++;
//	}
//
//	printf("%d\n", ret);
//
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
//			for (int j = 0; j < input-1-i; j++)
//			{
//				printf("  ");
//			}
//			for (int k = 0; k < i + 1; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double p = 0.0; double sum = 0.0;
//	int m = 0;
//	int d = 0;
//	int q = 0;
//	scanf("%lf %d %d %d", &p, &m, &d, &q);
//
//	if (m == 11)
//	{
//		sum = p * 0.7 - q * 50;
//		if (sum < 0)
//		{
//			sum = 0;
//		}
//	}
//	else
//	{
//		sum = p * 0.8 - q * 50;
//		if (sum < 0)
//		{
//			sum = 0;
//		}
//	}
//
//	printf("%.2lf", sum);
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0; int count = 0;
//	//b = 2; a = 3;
//	//b = 2; e = 4;
//	//c = 1; d = 2;
//	//c = 5; d = 3;
//	//e = 4; a = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			if (b == a)
//				continue;
//			for (c = 1; c <= 5; c++)
//			{
//				if (c == b || c == a)
//					continue;
//				for (d = 1; d <= 5; d++)
//				{
//					if (d == c || d == b || d == a)
//						continue;
//					for (e = 1; e <= 5; e++)
//					{
//						if (e == d || e == c || e == b || e == a)
//							continue;
//						//printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//						//count++;
//						if(   ((b == 2)+(a == 3) == 1)
//							&&((b == 2)+(e == 4) == 1)
//							&&((c == 1)+(d == 2) == 1)
//							&&((c == 5)+(d == 3) == 1)
//							&&((e == 4)+(a == 1) == 1)
//						   )
//							printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//
//
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	//printf("count = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (a + b + c + d == 1)
//						//printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c, d);
//						if((a!=1)+(c==1)+(d==1)+(d!=1) == 3)
//							printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c, d);
//						
//
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void fun1(char* p,int k)
//{
//	char tmp[100] = { 0 };
//	for (int i = 0; i < k; i++)
//	{
//		tmp[i] = p[i];
//	}
//
//	char* q = p + k;
//	while (*q)
//	{
//		*p = *q;
//		p++; q++;
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		*(p+i) = tmp[i];
//	}
//}
//
//void fun2(char* p, int k)
//{
//	char tmp = 0;
//	char* ret = p;
//	while (k--)
//	{
//		p = ret;
//		tmp = *p;
//		char* q = p + 1;
//		while (*q)
//		{
//			*p = *q;
//			p++; q++;
//		}
//		*p = tmp;
//	}
//}
//
//void inv_str(char* p,int len)
//{
//	//int len = strlen(p);
//	char* left = p;
//	char* right = p + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; right--;
//	}
//}
//
//void fun3(char* p, int k)
//{
//	int len = strlen(p);
//	inv_str(p, k);
//	inv_str(p + k, len - k);
//	inv_str(p, len);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	//fun1(arr, 2);
//	//fun2(arr, 5);
//	fun3(arr, 5);
//
//	printf("%s\n", arr);
//	return 0;
//}

//int bin_search(int arr[], int n,int k)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k == arr[mid])
//			return mid;
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int input = 0;
//	scanf("%d", &input);
//
//	int ret = 0; int row = 0;
//	if (input < arr[0][0]|| input>arr[2][2])
//		ret = -1;
//	else
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (input >= arr[i][0] && input <= arr[i][2])
//			{
//				row = i;
//				ret = bin_search(arr[i], 3, input);
//			}
//			else
//				ret = -1;
//			if (ret != -1)
//				break;
//		}
//
//		
//	}
//
//	if (ret != -1)
//	{
//		printf("找到了，下表是：%d,%d\n", row, ret);
//	}
//	else
//		printf("不存在\n");
//	return 0;
//}

//struct point 
//{
//	int x;
//	int y;
//};
//
//
//struct point find(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p = { -1,-1 };
//	if (k<arr[0][0] || k>arr[r - 1][c - 1])
//		return p;
//	else
//	{
//		while (x <= r - 1 && y >= 0)
//		{
//			if (k < arr[x][y])
//			{
//				y--;
//			}
//			else if (k > arr[x][y])
//			{
//				x++;
//			}
//			else
//			{
//				p.x = x;
//				p.y = y;
//				return p;
//			}
//		}
//		return p;
//	}
//
//}

//int find(int arr[3][3], int* pr, int* pc, int k)
//{
//	int r = *pr; int c = *pc;
//	int x = 0;
//	int y = c - 1;
//	
//	if (k<arr[0][0] || k>arr[r - 1][c - 1])
//	{
//		*pr = -1;
//		*pc = -1;
//		return 0;
//	}
//	else
//	{
//		while (x <= r - 1 && y >= 0)
//		{
//			if (k < arr[x][y])
//			{
//				y--;
//			}
//			else if (k > arr[x][y])
//			{
//				x++;
//			}
//			else
//			{
//				*pr = x;
//				*pc = y;
//				return 1;
//			}
//		}
//		*pr = -1;
//		*pc = -1;
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int input = 0;
//	scanf("%d", &input);
//
//	int r = 3; int c = 3;
//	int ret = find(arr, &r, &c, input);
//	
//	if (ret == 1)
//		printf("%d %d\n", r, c);
//	else
//		printf("找不到\n");
//	return 0;
//}

//void fun1(char arr[], int k)
//{
//	int len = strlen(arr);
//
//	while (k--)
//	{
//		char tmp = arr[0];
//		for (int i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 5;
//
//	fun1(arr, k);
//
//	printf("%s\n", arr);
//
//	
//}

//void fun1(char arr[], int k)
//{
//	int len = strlen(arr);
//
//	while (k--)
//	{
//		char tmp = arr[0];
//		for (int i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int is_rotate(char s1[], char s2[])
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//
//	if (len1 != len2)
//		return 0;
//	else
//	{
//		for (int i = 0; i < len1; i++)
//		{
//			
//			fun1(s1, 1);
//			if (strcmp(s1, s2) == 0)
//			{
//				return 1;
//			}
//		}
//		return 0;
//	}
//
//
//}
//
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "abcdef";
//	int ret = is_rotate(s1, s2);
//	printf("%d\n", ret);
//	return 0;
//}

//int is_rotate(char s1[], char s2[])
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 == len2)
//	{
//		strncat(s1, s1, len1);
//		if (strstr(s1, s2) == NULL)
//			return 0;
//		else
//			return 1;
//	}
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "abcdef";
//	int ret = is_rotate(s1, s2);
//	printf("%d\n", ret);
//	return 0;
//}