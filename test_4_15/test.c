#include <stdio.h>

int global = 2025;
#define MAX 100
extern int add(int x, int y);
//这是一条故意写的注释
int main()
{
    int m = MAX;
	//printf("hello world\n");
	printf("%d\n", add(1, 1));
	printf("%d\n", global);

	return 0;
}