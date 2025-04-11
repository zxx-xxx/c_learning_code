#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	int* tmp = (int*)realloc(p, 20 * sizeof(int));
//	if (tmp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 2;
//	}
//	p = tmp;
//	for (i = 0; i < 20; i++)
//    {
//   		printf("%d ", *(p + i));
//    }
//
//
//	free(p); p = NULL;
//	return 0;
//}

//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);
//	if (str == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
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

