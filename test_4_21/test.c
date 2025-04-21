#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
#include <stddef.h>


//#define num 7
//int main()
//{
//	int score[num] = { 0 }; int min = 0; int max = 0; double sum = 0.0; double aver = 0.0;
//	while (scanf("%d %d %d %d %d %d %d", 
//		   &score[0], &score[1], &score[2], &score[3], &score[4], &score[5], &score[6]) == 7)
//	{
//		min = score[0]; max = score[0];
//		int i = 0;
//		for (i = 0; i < 7; i++)
//		{
//			if (score[i] < min)
//				min = score[i];
//			if (score[i] > max)
//				max = score[i];
//		}
//		for (i = 0; i < num; i++)
//		{
//			sum = sum + score[i];
//		}
//		sum = sum - (min + max);
//		aver = sum / (num-2);
//		printf("%.2lf\n", aver);
//		sum = 0.0;
//	}
//	return 0;
//}

//int main()
//{
//	int score = 0; int sum = 0; int min = 100; int max = 0; int count = 0;
//	while (scanf("%d", &score) == 1)
//	{
//		count++;
//		sum = sum + score;
//		if (score < min)
//			min = score;
//		if (score > max)
//			max = score;
//		if (count == 7)
//		{
//			sum = sum - min - max;
//			printf("%.2lf\n", sum / 5.0);
//			count = 0;
//			sum = 0;
//			min = 100;
//			max = 0;
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	printf("%u\n", sizeof(long));
//	return 0;
//}

//int main()
//{
//	struct s
//	{
//		char c1;
//		char c2;
//	}s1 = { 0 };
//	printf("%p\n%p\n", &s1.c1, &s1.c2);
//	return 0;
//}

//struct s
//{
//	char c1;
//	char c2;
//};
//
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	printf("%p\n%p\n", &(ps->c1), &(ps->c2));
//	return 0;
//}

//int main()
//{
//	char c1 = 0;
//	char c2 = 0;
//	printf("%p %p\n", &c1, &c2);
//	char* c3 = (char*)malloc(1);
//	char* c4 = (char*)malloc(1);
//	printf("%p %p\n", c3, c4);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 }; int tmp[8] = { 0 }; int n = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = arr[i];
//		int j = 0; int flag = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (j == i)
//				continue;
//			if (arr[i] == arr[j])
//			{
//				flag = 1;//不是
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			;
//		}
//		else if(flag == 0)
//		{
//			tmp[n] = i;
//			n++;
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[tmp[i]]);
//	}
//	return 0;
//
//}

//int main()
//{
//	//int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int ret = 0;
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	ret = ret ^ arr[i];
//	//}
//	//printf("%d\n", ret);
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 5,1,2,3,4,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//按照两个单身狗不同的那一位分组
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	int n = 0;
//	while (ret % 2 == 0)
//	{
//		n++;//从第1位开始，第n+1位不为0（第n+1位不同）
//		ret = ret / 2;
//	}
//	int ret1 = 0; int ret0 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> n) % 2 == 1)
//			ret1 = ret1 ^ arr[i];
//		else
//			ret0 = ret0 ^ arr[i];
//
//	}
//	printf("%d %d\n", ret0, ret1);
//	return 0;
//}

//int my_atoi(const char* arr)
//{
//	int i = 0;
//	while (isspace(arr[i]))
//	{
//		i++;
//	}
//	if (arr[i] == '\0')
//		return 0;
//	else
//	{
//		int j = i;
//		if (isdigit(arr[i]))
//		{
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			return sum;
//		}
//		else if (arr[i] == '+')
//		{
//			i = i + 1;
//			j = j + 1;
//			if (!isdigit(arr[j]))
//				return 0;
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			return sum;
//		}
//		else if (arr[i] == '-')
//		{
//			int flag = -1;
//			i = i + 1;
//			j = j + 1;
//			if (!isdigit(arr[j]))
//				return 0;
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			sum = sum * flag;
//			return sum;
//		}
//		else
//			return 0;
//
//
//	}
//}

//int my_atoi(const char* arr)
//{
//	assert(arr);
//	int i = 0;
//	while (isspace(arr[i]))
//	{
//		i++;
//	}
//	if (arr[i] == '\0')
//		return 0;
//	else
//	{
//		int j = i;
//		if (isdigit(arr[i]))
//		{
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			return sum;
//		}
//		else if (arr[i] == '+' || arr[i] == '-')
//		{
//			int flag = 0;
//			if (arr[i] == '+')
//				flag = 1;
//			else
//				flag = -1;
//			i = i + 1;
//			j = j + 1;
//			if (!isdigit(arr[j]))
//				return 0;
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			sum = sum * flag;
//			return sum;
//		}
//		else
//			return 0;
//
//
//	}
//}

//int my_atoi(const char* arr)
//{
//	assert(arr);
//	int i = 0;
//	while (isspace(arr[i]))
//	{
//		i++;
//	}
//	if (arr[i] == '\0')
//		return 0;
//	else
//	{
//		int j = i;
//		int flag = 1;
//		if (arr[i] == '+' || arr[i] == '-')
//		{
//			if (arr[i] == '+')
//				flag = 1;
//			else
//				flag = -1;
//			i = i + 1;
//			j = j + 1;
//		}
//		if (isdigit(arr[i]))
//		{
//			while (isdigit(arr[j]))
//			{
//				j++;
//			}
//			int sum = 0; int k = 0;
//			for (j = j - 1; j >= i; j--)
//			{
//				sum = sum + ((int)(arr[j] - '0')) * ((int)pow(10, k));
//				k++;
//			}
//			sum = sum * flag;
//			return sum;
//		}
//		else
//			return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "  123456";
//	int ret = atoi(arr);
//	printf("%d\n", ret);
//	ret = my_atoi(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "+ 123";
//	printf("%d\n", atoi(arr));
//	return 0;
//}

//int main()
//{
//	int x = '0' - '0';
//	printf("%d\n", x);
//	return 0;
//}

//struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define my_offsetof(type,member) ((int)&(((type*)0)->member))
//
//int main()
//{
//	printf("%d\n", offsetof(struct s, c1));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, c2));
//	printf("\n");
//	printf("%d\n", my_offsetof(struct s, c1));
//	printf("%d\n", my_offsetof(struct s, i));
//	printf("%d\n", my_offsetof(struct s, c2));
//
//
//
//	return 0;
//}

//#define swap(x) for(int i = 0;i < 32;i += 2)\
//{if(((x>>i)&1)!=((x>>(i+1))&1)){x = x^((int)(pow(2,i)+pow(2,i+1)));}}
//
//int main()
//{
//	int a = 2;
//	swap(a);
//	printf("%d\n", a);
//	return 0;
//}

//#define swap(x) ((((x)<<1)&(0xaaaaaaaa))+(((x)>>1)&(0x55555555)))
//
//int main()
//{
//	int a = -2;
//	a = swap(a);
//	printf("%d\n", a);
//
//
//
//	//int a = 0b00000000000000000000000000000001;
//	//int a = 0x00000001;
//	//printf("%d\n", a);
//	return 0;
//}