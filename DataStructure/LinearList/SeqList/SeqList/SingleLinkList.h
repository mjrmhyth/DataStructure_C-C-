#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef struct LNode //定义单链表结点类型
{
	int data;//每个节点存放一个数据元素
	struct LNode * next;//指针指向下一个节点

}LNode,*LinkList;

bool InitList(LinkList &L);//初始化一个单链表（带头结点）
LNode * GetElem(LinkList L, int i);
bool ListInsert(LinkList &L, int i, int e);//在第i个位置插入元素e
bool ListDelete(LinkList &L, int i, int e);//功能：按位序删除（带头结点）
LNode * GetElem(LinkList L, int i);//按位查找