#pragma once

#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


#define MAX 1000
//���͵Ķ���


//��Ա��Ϣ

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;



//ͨѶ¼

typedef struct Contact
{
	PeoInfo data[MAX];//������ӽ������˵���Ϣ
	int sz;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;



//��ʼ��ͨѶ¼

void InitContat(Contact* pc);


//������ϵ��

void AddContact(Contact* pc);


//��ӡ��ϵ����Ϣ

void PrintContact(const Contact* pc);


//ɾ����ϵ��

void DelContact(Contact* pc);

//����ָ����ϵ��

void SearchContact(Contact* pc);

//�޸���ϵ��

void ModifyContact(Contact* pc);


