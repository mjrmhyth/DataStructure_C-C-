#pragma once

typedef struct LNode //���嵥����������
{
	int data;//ÿ���ڵ���һ������Ԫ��
	struct LNode * next;//ָ��ָ����һ���ڵ�

}LNode,*LinkList;

LNode * GetElem(LinkList L, int i);
bool ListInsert(LinkList &L, int i, int e);//�ڵ�i��λ�ò���Ԫ��e