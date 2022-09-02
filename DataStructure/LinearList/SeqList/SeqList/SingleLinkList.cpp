#define __CRT_SECURE_NO_WARNINGS 1

#include "SingleLinkList.h"

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