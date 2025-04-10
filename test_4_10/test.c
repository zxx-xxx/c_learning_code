#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//enum week
//{
//	MON = 1,
//	TUES = 1,
//	WEDNES,
//	THURS,
//	FRI,
//	SAT,
//	SUN
//};
//
//int main()
//{
//	enum week d = FRI;
//	printf("%d\n", MON);
//	printf("%d\n", TUES);
//	printf("%d\n", WEDNES);
//	printf("%d\n", THURS);
//	printf("%d\n", FRI);
//	printf("%d\n", SAT);
//	printf("%d\n", SUN);
//
//	return 0;
//}

//union un
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	printf("%u\n", sizeof(union un));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (*(char*)(&a) == 1)
//		printf("小端\n");
//	else if(*(char*)(&a) == 0)
//		printf("大端\n");
//
//	return 0;
//}

//int main()
//{
//	union un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	if (u.c == 1)
//	{
//		printf("小端\n");
//
//	}
//	else
//	{
//		printf("大端\n");
//
//	}
//	return 0;
//}

//union un
//{
//	char arr[5];
//	int i;
//};

//union un
//{
//	short arr[7];
//	int i;
//};
//
//int main()
//{
//	printf("%u\n", sizeof(union un));
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 0 };
//	//动态内存分配
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	//释放
//	free(p); p = NULL;
//
//	return 0;
//}

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p); p = NULL;
	return 0;
}