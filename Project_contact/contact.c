#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void initcontact(c* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
	//for (int i = 0; i < NUM; i++)
	//{
	//	(pc->data)[i] = (p){ {0},0,{0},{0},{0} };
	//}
	printf("通讯录初始化已完成\n");
}

void addcontact(c* pc) 
{
	assert(pc);
	if (pc->count >= NUM)
		printf("通讯录已满,无法添加\n");
	else
	{
		pc->count++;
		printf("请输入新联系人的信息(姓名 年龄 性别 电话 地址):>");
		scanf("%s %d %s %s %s", pc->data[pc->count - 1].name,
			&(pc->data[pc->count - 1].age),
			pc->data[pc->count - 1].sex,
			pc->data[pc->count - 1].tele,
			pc->data[pc->count - 1].addr);
		printf("增加成功\n");
	}

}

void showcontact(const c* pc)
{
	assert(pc);
	if (pc->count == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%-15s %-4s %-10s %-12s %-50s\n", "名称", "年龄", "性别", "电话", "地址");
		int i = 0;
		for (i = 0; i < pc->count; i++)
		{
			printf("%-15s %-4d %-10s %-12s %-50s\n", pc->data[i].name,
				pc->data[i].age, 
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
		printf("通讯录内容显示完毕\n");
	}

}

static int find(c* pc, char arr[])
{
	assert(pc && arr);
	if (pc->count == 0)
	{
		//printf("通讯录为空,查找失败\n");
		return -1;
	}
	else
	{
		int i = 0; 
		for (i = 0; i < pc->count; i++)
		{
			if (strcmp(arr, pc->data[i].name) == 0)
			{
				//printf("查找成功，下标是%d\n", i);
				//memset(&pc->data[i], 0, sizeof(pc->data[0]));
				return i;
			}
		}

		//printf("该联系人不存在,查找失败\n");
		return -1;


	}

}


void delcontact(c* pc)
{
	assert(pc);
	if(pc->count == 0)
		printf("通讯录为空,删除失败\n");
	else
	{
		char tmp[MAX_NAME] = { 0 }; int flag = 0;
		printf("请输入待删除的联系人名称:>");
		scanf("%s", tmp);
		flag = find(pc, tmp);
		if (flag != -1)
		{
			memset(&pc->data[flag], 0, sizeof(pc->data[0]));
			int j = 0;
			for (j = flag; j < pc->count - 1; j++)
			{
				memmove(&pc->data[j], &pc->data[j + 1], sizeof(pc->data[0]));//结构体数据直接赋值
			}
			pc->count--;
			printf("删除成功\n");
		}
		else
		{
			printf("未找到待删除的联系人,删除失败\n");
		}

	}

}

void findcontact(const c* pc)
{
	assert(pc);
	char tmp[MAX_NAME] = { 0 };
	printf("请输入待查找的联系人名称:>");
	scanf("%s", tmp);
	int flag = find(pc, tmp);
	if (flag == -1)
	{
		printf("查找失败\n");
	}
	else
	{
		printf("查找成功\n");
		printf("%-15s %-4s %-10s %-12s %-50s\n", "名称", "年龄", "性别", "电话", "地址");
		printf("%-15s %-4d %-10s %-12s %-50s\n", pc->data[flag].name,
			pc->data[flag].age,
			pc->data[flag].sex,
			pc->data[flag].tele,
			pc->data[flag].addr);
	}
}

void modcontact(c* pc)
{
	assert(pc);
	char tmp[MAX_NAME] = { 0 };
	printf("请输入待修改的联系人名称:>");
	scanf("%s", tmp);
	int flag = find(pc, tmp);
	if (flag == -1)
	{
		printf("待修改的联系人不存在\n");
	}
	else
	{
		p tmpp;
		printf("请输入待修改的联系人数据(姓名 年龄 性别 电话 地址):>");
		scanf("%s %d %s %s %s", tmpp.name,
			&tmpp.age,
			tmpp.sex,
			tmpp.tele,
			tmpp.addr);
		pc->data[flag] = tmpp;
		printf("修改成功\n");
	}


}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((p*)e1)->name, ((p*)e2)->name);

}


void sortcontact(c* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(pc->data[0]), cmp);
	printf("排序成功\n");
}
