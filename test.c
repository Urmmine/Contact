#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//ͨѶ¼
//1.ͨѶ¼�д��1000���˵���Ϣ
//ÿ���˵���Ϣ��
//���������䣬�Ա𣬵绰����ַ
//2.�����˵���Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨѶ¼����Ϣ

void menu()
{
	printf("************************\n");
	printf("****1.add**2.del********\n");
	printf("****3.search**4.modify**\n");
	printf("****5.sort****6.print***\n");
	printf("*********0.exit*********\n");
}


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};

int main()
{
	int input = 0;
	//����ͨѶ¼
	PeoInfo data[MAX];
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContat(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ���˵���Ϣ
			DelContact(&con);
			break;
		case SEARCH:
			//�����˵���Ϣ
			SearchContact(&con);
			break;
		case MODIFY:
			//�޸��˵���Ϣ
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			//��ӡ��ϵ��
			PrintContact(&con);
			break; 
		case EXIT:
			printf("�˳�ͨѶ¼");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}