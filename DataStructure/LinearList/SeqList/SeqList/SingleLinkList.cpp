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
���ܣ�������Ĳ���,�ڵ�i��λ�ò���Ԫ��e
*/
bool ListInsert(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;
	LNode * p;

}