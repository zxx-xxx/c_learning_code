#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef struct s
//{
//	char arr[20];
//	int age;
//	float score;
//}s;
//
//int main()
//{
//	s s1 = { "zxx",23,100.0f };
//	//printf("%s %d %f\n", s1.arr, s1.age, s1.score);
//	char str[100] = { 0 };
//	sprintf(str, "%s %d %f", s1.arr, s1.age, s1.score);
//	printf(str); printf("\n");
//	s s2 = { 0 };
//	sscanf(str, "%s %d %f", s2.arr,&s2.age,&s2.score);
//	printf("%s %d %f\n", s2.arr, s2.age, s2.score);
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
//	fseek(pf, 2, SEEK_SET);
//	//fseek(pf, -4, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%ld\n", ftell(pf));
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%ld\n", ftell(pf));
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&a, 4, 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

