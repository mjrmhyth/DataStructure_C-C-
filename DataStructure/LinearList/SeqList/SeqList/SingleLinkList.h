#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef struct LNode //���嵥����������
{
	int data;//ÿ���ڵ���һ������Ԫ��
	struct LNode * next;//ָ��ָ����һ���ڵ�

}LNode,*LinkList;

bool InitList(LinkList &L);//��ʼ��һ����������ͷ��㣩
LNode * GetElem(LinkList L, int i);
bool ListInsert(LinkList &L, int i, int e);//�ڵ�i��λ�ò���Ԫ��e
bool ListDelete(LinkList &L, int i, int e);//���ܣ���λ��ɾ������ͷ��㣩
LNode * GetElem(LinkList L, int i);//��λ����