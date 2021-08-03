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
	int number=0;//记录结点个数
	int temp;
	struct node* tail = NULL;//创建头结点
	struct node* headnode=NULL;
	headnode = (struct node*)malloc(sizeof(struct node));
	if (headnode == NULL)
	{
		printf("内存分配失败！");
		return 0;
	}
	headnode->next = NULL;
	printf("请输入结点个数：");
	scanf("%d", &number);
	struct node* newnode = NULL;
	newnode = headnode;
	for (int i = 0; i < number; i++) //开始创建新结点
	{
		printf("请输入第%d个结点的值\n", i + 1);
		scanf("%d", &temp);
		tail = (struct node*)malloc(sizeof(struct node));
		if (tail == NULL)
		{
			printf("内存分配失败");
			return 0;
		}
		tail->data = temp;
		tail->next = NULL;          //把数据填入新结点
		newnode->next = tail;       //把新结点挂到尾巴
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
		printf("链表已遍历完!");
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