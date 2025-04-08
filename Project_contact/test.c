#define _CRT_SECURE_NO_WARNINGS 1

//静态的版本

#include "contact.h"



void menu()
{
	printf("\n*************************\n");
	printf("*****1:add    2:del******\n");
	printf("*****3:find   4:modify***\n");
	printf("*****5:show   6:sort*****\n");
	printf("*****    0:exit     *****\n");
	printf("*************************\n");


}

int main()
{
	int input = 0; int ret = 0;
	c c1;
	initcontact(&c1);
	do
	{
		menu();
		printf("\n请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			addcontact(&c1);
			break;
		case 2:
			delcontact(&c1);
			break;
		case 3:
			findcontact(&c1);
			break;
		case 4:
			modcontact(&c1);
			break;
		case 5:
			showcontact(&c1);
			break;
		case 6:
			sortcontact(&c1);
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("输入无效，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}