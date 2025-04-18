#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#include "stdio.h"
//#include "test.h"
//
//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//typedef unsigned int uint;
//typedef register reg;
//#define reg register
//#define a printf("%s %d",\
//"abcdef",10)
//
//int main()
//{
//	//printf("%s %d\n",
//	//	"abcdef", 10);
//	a;
//	return 0;
//}
//
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	printf("%d\n", SQUARE(5 + 1));
//	return 0;
//}

//void print(int n)
//{
//	printf("the value of "#n" is % d\n", n);
//}


//#define print(x) printf("the value of "#x" is %d\n", x)
//#define print(x,format) printf("the value of "#x" is "format"\n", x)

//int main()
//{
//	//char arr[] = "abc""def";
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//	//int a = 10;
//	//print(a);
//	//int b = 20;
//	//print(b);
//
//	int a = 10;
//	float f = 3.14f;
//	print(a,"%d");
//	print(f,"%f");
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int zxxscore = 100;
//	printf("%d\n", zxxscore);
//	printf("%d\n", CAT(zxx,score));
//
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a++, b++);
//	printf("m = %d\n", m);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}

//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//
//	printf("%d\n", m);
//
//	return 0;
//}
//#define __DEBUG__
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
////#ifdef __DEBUG__
////		printf("%d\n", arr[i]);
////#endif
//#if 0
//		printf("%d\n", arr[i]);
//#endif
//
//	}
//	return 0;
//}
//#define m 2
//
//int main()
//{
//#if m==1
//	printf("hehe\n");
//#elif m<1
//	printf("haha\n");
//#else 
//	printf("xixi\n");
//#endif
//	return 0;
//}

//#define m 
//
//int main()
//{
//	printf("%d\n", m);
//	return 0;
//}

