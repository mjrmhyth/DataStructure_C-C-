#pragma once

typedef struct LNode //定义单链表结点类型
{
	int data;//每个节点存放一个数据元素
	struct LNode * next;//指针指向下一个节点

}LNode,*LinkList;

LNode * GetElem(LinkList L, int i);
bool ListInsert(LinkList &L, int i, int e);//在第i个位置插入元素e