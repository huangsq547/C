#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};

struct node* creatlist(void)
{
	int number=0;//��¼������
	int temp;
	struct node* tail = NULL;//����ͷ���
	struct node* headnode=NULL;
	headnode = (struct node*)malloc(sizeof(struct node));
	if (headnode == NULL)
	{
		printf("�ڴ����ʧ�ܣ�");
		return 0;
	}
	headnode->next = NULL;
	printf("�������������");
	scanf("%d", &number);
	struct node* newnode = NULL;
	newnode = headnode;
	for (int i = 0; i < number; i++) //��ʼ�����½��
	{
		printf("�������%d������ֵ\n", i + 1);
		scanf("%d", &temp);
		tail = (struct node*)malloc(sizeof(struct node));
		if (tail == NULL)
		{
			printf("�ڴ����ʧ��");
			return 0;
		}
		tail->data = temp;
		tail->next = NULL;          //�����������½��
		newnode->next = tail;       //���½��ҵ�β��
		newnode = tail;
		tail = tail->next;
	}
	return headnode;
}
void showlist(struct node* a)
{
	int i = 0;
	while (a != NULL)
	{
		printf("%d ", a->data);
		a = a->next;
		i++;
	}
	while (a == NULL && i != 0)
	{
		printf("�����ѱ�����!");
		break;
	}
}

int main(void)
{
	struct node* a = creatlist();
	printf("\n");
	showlist(a->next);
	return 0;
}