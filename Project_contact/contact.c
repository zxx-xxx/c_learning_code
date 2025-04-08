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
	printf("ͨѶ¼��ʼ�������\n");
}

void addcontact(c* pc) 
{
	assert(pc);
	if (pc->count >= NUM)
		printf("ͨѶ¼����,�޷����\n");
	else
	{
		pc->count++;
		printf("����������ϵ�˵���Ϣ(���� ���� �Ա� �绰 ��ַ):>");
		scanf("%s %d %s %s %s", pc->data[pc->count - 1].name,
			&(pc->data[pc->count - 1].age),
			pc->data[pc->count - 1].sex,
			pc->data[pc->count - 1].tele,
			pc->data[pc->count - 1].addr);
		printf("���ӳɹ�\n");
	}

}

void showcontact(const c* pc)
{
	assert(pc);
	if (pc->count == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-15s %-4s %-10s %-12s %-50s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < pc->count; i++)
		{
			printf("%-15s %-4d %-10s %-12s %-50s\n", pc->data[i].name,
				pc->data[i].age, 
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
		printf("ͨѶ¼������ʾ���\n");
	}

}

static int find(c* pc, char arr[])
{
	assert(pc && arr);
	if (pc->count == 0)
	{
		//printf("ͨѶ¼Ϊ��,����ʧ��\n");
		return -1;
	}
	else
	{
		int i = 0; 
		for (i = 0; i < pc->count; i++)
		{
			if (strcmp(arr, pc->data[i].name) == 0)
			{
				//printf("���ҳɹ����±���%d\n", i);
				//memset(&pc->data[i], 0, sizeof(pc->data[0]));
				return i;
			}
		}

		//printf("����ϵ�˲�����,����ʧ��\n");
		return -1;


	}

}


void delcontact(c* pc)
{
	assert(pc);
	if(pc->count == 0)
		printf("ͨѶ¼Ϊ��,ɾ��ʧ��\n");
	else
	{
		char tmp[MAX_NAME] = { 0 }; int flag = 0;
		printf("�������ɾ������ϵ������:>");
		scanf("%s", tmp);
		flag = find(pc, tmp);
		if (flag != -1)
		{
			memset(&pc->data[flag], 0, sizeof(pc->data[0]));
			int j = 0;
			for (j = flag; j < pc->count - 1; j++)
			{
				memmove(&pc->data[j], &pc->data[j + 1], sizeof(pc->data[0]));//�ṹ������ֱ�Ӹ�ֵ
			}
			pc->count--;
			printf("ɾ���ɹ�\n");
		}
		else
		{
			printf("δ�ҵ���ɾ������ϵ��,ɾ��ʧ��\n");
		}

	}

}

void findcontact(const c* pc)
{
	assert(pc);
	char tmp[MAX_NAME] = { 0 };
	printf("����������ҵ���ϵ������:>");
	scanf("%s", tmp);
	int flag = find(pc, tmp);
	if (flag == -1)
	{
		printf("����ʧ��\n");
	}
	else
	{
		printf("���ҳɹ�\n");
		printf("%-15s %-4s %-10s %-12s %-50s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������޸ĵ���ϵ������:>");
	scanf("%s", tmp);
	int flag = find(pc, tmp);
	if (flag == -1)
	{
		printf("���޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		p tmpp;
		printf("��������޸ĵ���ϵ������(���� ���� �Ա� �绰 ��ַ):>");
		scanf("%s %d %s %s %s", tmpp.name,
			&tmpp.age,
			tmpp.sex,
			tmpp.tele,
			tmpp.addr);
		pc->data[flag] = tmpp;
		printf("�޸ĳɹ�\n");
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
	printf("����ɹ�\n");
}
