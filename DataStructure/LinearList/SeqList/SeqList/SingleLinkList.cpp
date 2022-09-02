#define __CRT_SECURE_NO_WARNINGS 1

#include "SingleLinkList.h"


bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ���
	if (L == NULL)
		return false;
	L->next = NULL;//ͷ���֮����ʱ��û�н��
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

/*
���ܣ���λ��ɾ������ͷ��㣩

*/
bool ListDelete(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;
	LNode *p;//̽��pָ��ǰɨ�赽�Ľ��
	int j = 0;//��ǰpָ����ǵڼ������
	p = L;//Lָ��ͷ��㣬ͷ����ǵ�0����㣨�������ݣ�
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)//iֵ���Ϸ�
		return false;
	if (p->next == NULL)//��i-1�����֮�������������
		return false;
	LNode * q = p->next;//��qָ��ɾ���Ľ��
	e = q->data;//��e����Ԫ�ص�ֵ
	p->next = q->next;//��*q�������С��Ͽ���
	free(q);
	return true;
}

/*
���ܣ���λ����
*/
LNode * GetElem(LinkList L, int i)
{
	if (i < 0)
		return NULL;
	LNode *p;//ָ��pָ��ǰɨ�赽�Ľ��
	int j = 0;//��ǰpָ����ǵڼ������
	p = L;//Lָ��ͷ��㣬ͷ����ǵ�0����㣨�������ݣ�
	while (p != NULL && j < i)//ѭ���ҵ���i�����
	{
		p = p->next;
		j++;
	}
	return p;
}

/*
���ܣ���ֵ����
*/
LNode * LocateElem(LinkList L, int e)
{
	LNode * p = L->next;
	//�ӵ�1����㿪ʼ����������Ϊe�Ľ��
	while (p != NULL && p->data != e)
		p = p->next;
	return p;//�ҵ��󷵻ظý���ָ�룬���򷵻�NULL
}

LinkList List_TailInsert(LinkList &L)//������������
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//����ͷ���
	LNode *s, *r = L;//rΪ��βָ��
	scanf("%d", &x);//�������ֵ
	while (x != 6666)//����6666��ʾ����
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;//rָ���µı�β
		scanf("%d", &x);
	}
	r->next = NULL;//β���ָ���ÿ�
	return L;
}


int main()
{
	LinkList L;//����һ��ָ�������ָ��
	InitList(L);//��ʼ��һ���ձ�
	return 0;
}