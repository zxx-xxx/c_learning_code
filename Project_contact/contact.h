#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#define NUM 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 50





typedef struct people
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}p;

typedef struct contact
{
	p data[NUM];
	int count;
}c;

void initcontact(c* pc);
void addcontact(c* pc);
void showcontact(const c* pc);
void delcontact(c* pc);
void findcontact(const c* pc);
void modcontact(c* pc);
void sortcontact(c* pc);


