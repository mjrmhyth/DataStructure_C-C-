#define __CRT_SECURE_NO_WARNINGS 1

#include "SingleLinkList.h"


bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//分配一个头结点
	if (L == NULL)
		return false;
	L->next = NULL;//头结点之后暂时还没有结点
	return true;
}


LNode * GetElem(LinkList L, int i)
{
	int j = 1;
	LNode * p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
		return nullptr;
	while (p != nullptr && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

/*
功能：单链表的插入,在第i个位置插入元素e
*/
bool ListInsert(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;
	LNode * p;//指针p指向当前扫描到的结点
	int j = 0;//当前p指向的是第几个结点
	p = L;//L指向头结点，头结点是第0个结点(不存数据)
	while (p != nullptr && j < i - 1)//循环找到第i-1个结点
	{
		p = p->next;
		j++;
	}
	if (p == nullptr)    //i值不合法
		return false;
	LNode * s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//将结点s连接到p之后
	return true;//插入成功
}

/*
功能：按位序删除（带头结点）

*/
bool ListDelete(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;
	LNode *p;//探针p指向当前扫描到的结点
	int j = 0;//当前p指向的是第几个结点
	p = L;//L指向头结点，头结点是第0个结点（不存数据）
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)//i值不合法
		return false;
	if (p->next == NULL)//第i-1个结点之后已无其他结点
		return false;
	LNode * q = p->next;//令q指向被删除的结点
	e = q->data;//用e返回元素的值
	p->next = q->next;//将*q结点从链中“断开”
	free(q);
	return true;
}

/*
功能：按位查找
*/
LNode * GetElem(LinkList L, int i)
{
	if (i < 0)
		return NULL;
	LNode *p;//指针p指向当前扫描到的结点
	int j = 0;//当前p指向的是第几个结点
	p = L;//L指向头结点，头结点是第0个结点（不存数据）
	while (p != NULL && j < i)//循环找到第i个结点
	{
		p = p->next;
		j++;
	}
	return p;
}

/*
功能：按值查找
*/
LNode * LocateElem(LinkList L, int e)
{
	LNode * p = L->next;
	//从第1个结点开始查找数据域为e的结点
	while (p != NULL && p->data != e)
		p = p->next;
	return p;//找到后返回该结点的指针，否则返回NULL
}

LinkList List_TailInsert(LinkList &L)//正向建立单链表
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//建立头结点
	LNode *s, *r = L;//r为表尾指针
	scanf("%d", &x);//输入结点的值
	while (x != 6666)//输入6666表示结束
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;//r指向新的表尾
		scanf("%d", &x);
	}
	r->next = NULL;//尾结点指针置空
	return L;
}


int main()
{
	LinkList L;//声明一个指向单链表的指针
	InitList(L);//初始化一个空表
	return 0;
}