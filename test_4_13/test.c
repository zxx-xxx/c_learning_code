#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//typedef struct s
//{
//	int n;
//	int arr[];
//}s;
//
//int main()
//{
//	//printf("%u\n", sizeof(s));
//	s* ps = (s*)malloc(sizeof(s) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	s* tmp = (s*)realloc(ps, sizeof(s) + 20 * sizeof(int));
//	if (tmp == NULL)
//	{
//		return 1;
//	}
//	ps = tmp; tmp = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//typedef struct s
//{
//	int n;
//	int* arr;
//}s;
//
//int main()
//{
//	s* ps = (s*)malloc(sizeof(s));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->arr = (int*)malloc(10 * sizeof(int));
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* tmp = (int*)realloc(ps->arr, 20 * sizeof(int));
//	if (tmp == NULL)
//	{
//		return 0;
//	}
//	ps->arr = tmp; 
//	tmp = NULL;
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\zxx\\Desktop\\³é¿¨·ÖÎö.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	fputc('a', pf);
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//int c = fgetc(pf);
//	//printf("%c\n", c);
//	int ch = 0;
//	while ((ch = fgetc(pf))!=EOF)
//	{
//		printf("%c ",ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	fputs("zxx is god\n", pf);
//	fputs("zxx is god\n", pf);
//	fputs("zxx is god\n", pf);
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	char arr[20] = "xxxxxxxxxxxxxx";
//	printf("%s\n", fgets(arr, 20, pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct s
//{
//	char arr[20];
//	int age;
//	float score;
//}s;

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	s s = { "zxx",23,100.0f };
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	s s = { 0 };
//	fscanf(pf, "%s %d %f", s.arr, &s.age, &s.score);
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//	fprintf(stdout,"%s %d %f\n", s.arr, s.age, s.score);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

typedef struct s
{
	char arr[20];
	int age;
	float score;
}s;

//int main()
//{
//	s s1 = { "zxx",22,99.0f }; 
//	s* ps = &s1;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(ps,sizeof(s),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	s s1 = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fread(&s1, sizeof(s), 1, pf);
//	fprintf(stdout, "%s %d %f\n", s1.arr, s1.age, s1.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}