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
	LNode * p;//ָ��pָ��ǰɨ�赽�Ľ��
	int j = 0;//��ǰpָ����ǵڼ������
	p = L;//Lָ��ͷ��㣬ͷ����ǵ�0�����(��������)
	while (p != nullptr && j < i - 1)//ѭ���ҵ���i-1�����
	{
		p = p->next;
		j++;
	}
	if (p == nullptr)    //iֵ���Ϸ�
		return false;
	LNode * s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//�����s���ӵ�p֮��
	return true;//����ɹ�
}